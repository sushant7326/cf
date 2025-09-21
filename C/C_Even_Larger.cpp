#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    int sum_odd = 0;
    int sum_even = 0;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (i%2==0) sum_odd += v[i];
        else sum_even += v[i];
        
        if (sum_odd > sum_even) {
            v[i]--;
            sum_odd--;
            ans += sum_odd - sum_even;
        }
    }

    cout << ans << endl;
    
    return;
}

int32_t main() {
    int t;
    // t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}