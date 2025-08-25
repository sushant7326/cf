#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;

    unordered_map<int, int> mp;
    int temp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        mp[temp]++;
    }

    for (auto it: mp) {
        if (it.second > 1) {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
    return;
}

int32_t main() {
    int t;
    // t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
} 