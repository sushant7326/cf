#include <bits/stdc++.h>
using namespace std;

void solve () {
    int x, y;
    cin >> x >> y;
    int ans = x + y;
    ans %= 12;
    if (!ans) cout << 12;
    else cout << ans;
    cout << endl;
    return;
}
 
int main () {
    int t;
    // cin >> t;
    t = 1;
    while (t--) solve();
    return 0;
}