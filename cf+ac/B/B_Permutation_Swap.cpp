#include <bits/stdc++.h>
using namespace std;

void solve() {
    int p;
    cin >> p;
    
    int temp;
    int ans = 0;
    for (int i = 1; i <= p; i++) {
        cin >> temp;
        int diff = abs(temp - i);
        ans = __gcd(ans, diff);
    }

    cout << ans << endl;
    return;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}