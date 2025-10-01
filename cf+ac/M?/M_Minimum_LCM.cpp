#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;

    int best_d = 1; 
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            if (i <= n / 2) best_d = max(best_d, i);
            int other = n / i;
            if (other <= n / 2) best_d = max(best_d, other);
        }
    }

    cout << best_d << " " << (n - best_d) << "\n";
}


int32_t main() {
    int t;
    // t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}