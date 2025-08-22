#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k, x;
    cin >> n >> k >> x;

    long long sum_total_front = ((k) * (k+1)) / 2;
    if (sum_total_front > x) {
        cout << "NO" << endl;
        return;
    }
    
    long long sum_total_back = (((n) * (n+1)) / 2) - (((n-k) * (n-k+1)) / 2);
    if (sum_total_back < x) {
        cout <<  "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    return;

}

int main() {
    int t;
    cin >> t;
    while(t-- > 0) solve();
    return 0;
}