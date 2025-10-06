#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;
    int ans = 3 - (n%3);
    if (ans == 3) cout << 0 << endl;
    else cout << ans << endl;
    return;
}

int32_t main() {
    int t;
    // t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}