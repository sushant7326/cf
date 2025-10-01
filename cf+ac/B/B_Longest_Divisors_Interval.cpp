#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long

void solve(){
    ll x;
    cin >> x;
    ll count = 0;
    ll max = count;
    for (ll i = 1; i <=100; i++) {
        if (x%i==0) count++;
        else {
            if (count > max) max = count;
            count = 0;
        }
    }
    cout << max << endl;
    return;
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}