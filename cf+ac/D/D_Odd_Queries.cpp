#include <bits/stdc++.h>
using namespace std;

#define int unsigned long long

void solve() {
    int n, q;
    cin >> n >> q;

    vector<int> v(n);
    int sum_total = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum_total += v[i];
    }

    vector<int> pref(n);
    pref[0] = v[0];
    for(int i = 1; i < n; i++) {
        pref[i] = pref[i - 1] + v[i];
    }

    while(q--) {
        int l, r, k;
        cin >> l >> r >> k;
        

        int sum = pref[r - 1];
        if(l > 1) sum -= pref[l - 2];

        if ((sum_total - sum + (k * (r-l+1))) % 2 == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return;
}

int32_t main() {
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}