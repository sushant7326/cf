#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> v(n + 1, 0);
    vector<int> c(2, 0);
    for (int i = 0; i < n; i++) {
        c[s[i] - 'a']++;
        v[i + 1] = c[0] - c[1];
    }

    int diff = c[0] - c[1];
    if (diff == 0) {
        cout << 0 << endl;
        return;
    }

    unordered_map<int, int> mp;
    mp[0] = 0;

    int ans = n;
    for (int j = 1; j <= n; j++) {
        auto it = mp.find(v[j] - diff);
        mp[v[j]] = j;
        if (it == mp.end()) continue;
        else ans = min (ans, j - (*it).second);
    }

    if (ans == n) cout << -1 << endl;
    else cout << ans << endl;

    return;
}

int32_t main() {
    int t;
    // t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}