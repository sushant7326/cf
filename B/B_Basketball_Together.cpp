#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, d;
    cin >> n >> d;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.rbegin(), v.rend());
    int sum = 0, count = 0, max = -1e9;

    for (int l = 0, r = n-1; l <= r; ) {
        if (!sum) {
            sum +=  v[l];
            max = v[l];
            l++;
        }
        else {
            sum += max;
            r--;
        } 
        if (sum > d) {
            count++;
            sum = 0;
        }
    }
    cout << count << endl;
    return;
}

int32_t main() {
    int t;
    t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}