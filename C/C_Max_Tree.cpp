#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;

    vector<int> u(n-1);
    vector<int> v(n-1);
    vector<int> x(n-1);
    vector<int> y(n-1);

    for (int i = 0; i < n-1; i++) {
        int x, y, u, v;
        cin >> u >> v >> x >> y;
        if (u > v) 
    }

    for (int i = 0; i < n-1; i++) {
        if (u[i] > v[i]) 
    }

}

int32_t main() {
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}