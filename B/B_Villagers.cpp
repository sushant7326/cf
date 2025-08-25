#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    if (n == 2) {
        cout << max(v[0], v[1]) << endl;
        return;
    }

    sort(v.begin(), v.end());
    int sum = 0;
    for (int i = 1; i < n; i += 2) sum += max(v[i], v[i-1]);
    if (n%2==0) {
        cout << sum << endl;
        return;
    }

    int back_sum = 0;
    for (int i = 1; i < n; i += 2) back_sum += max(v[i], v[i+1]);
    
    sum += v[n-1];
    back_sum += v[0];
    cout << min(sum, back_sum) << endl;
    return;
}

int32_t main() {
    int t;
    // t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}