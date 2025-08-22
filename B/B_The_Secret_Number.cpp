#include <bits/stdc++.h>
using namespace std;

#define int unsigned long long

void solve() {
    // int n;
    // cin >> n;
    // int y;
    // vector<int> v;
    // for (int x = 1; x <= n; x++) {
    //     y = n - x;
    //     double lg = log10((y*1.0) / x);
    //     if (fabs(lg - round(lg)) < 1e-9 && lg > 0) v.push_back(x);
    // }
    // cout << v.size() << endl;
    // for (int i: v) cout << i << " ";
    // if (v.size() != 0) cout << endl; 

    int n;
    cin >> n;

    int duplicate = n;
    int digits = 0;
    do {
        digits++;
        duplicate /= 10;
    } while (duplicate > 0);
    
    int p = 1;
    vector<int> v;
    for (int i = 1; i <= digits; i++) {
        p *= 10;
        if (n % (p+1) == 0) v.push_back(n / (p+1));
    }
    cout << v.size() << endl;
    reverse(v.begin(), v.end());
    for (int i: v) cout << i << " ";
    if (v.size() != 0) cout << endl; 
    
    return;

}

int32_t main () {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}