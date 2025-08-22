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

    while(q--) {
        int l, r, k;
        cin >> l >> r >> k;
        
        int sum = 0;
        for (int i = l-1; i < r; i++) sum += v[i];

        if ((sum_total - sum + (k * (r-l+1))) % 2 == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return;
}

int32_t main() {
    int t;
    cin >> t;
    // t = 1;
    while(t--) solve();
    return 0;
}