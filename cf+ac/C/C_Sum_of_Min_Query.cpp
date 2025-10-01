#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve () {
    int n, q;
    cin >> n >> q;

    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    int sum = 0;
    for (int i = 0; i < n; i++) sum += min(a[i], b[i]);

    for (int i = 0; i < q; i++) {
        char ch;
        cin >> ch;

        int x, y;
        cin >> x >> y;

        sum -= min(a[x-1], b[x-1]);
        if (ch == 'A') {
            sum += min(b[x-1], y);
            a[x-1] = y;
        }
        else if (ch == 'B') {
            sum += min(a[x-1], y);
            b[x-1] = y;
        }

        cout << sum << endl;
    }

    return;

}

int32_t main () {
    int t;
    t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}