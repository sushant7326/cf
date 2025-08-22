#include <bits/stdc++.h>
using namespace std;

#define int unsigned long long

void solve() {
    int n;
    cin >> n;

    string res = "";
    while (n > 0) {
        int remainder = n % 3;
        res.push_back('0' + remainder);
        n /= 3;
    }
    // cout << res << endl;
    int cost = 0;
    int p = 1;
    for (int x = 0; x < res.size(); x++) {
        if (x == 0) p = 1;
        else p *= 3;
        int number = res[x] - 48;
        // cout << number << " ";
        cost += round(number * (3 + (x / 3.0)) * p);
    }
    // cout << endl;
    cout << cost << endl;
    return;
}

int32_t main () {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}