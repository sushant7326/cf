#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int a, b, n;
    cin >> a >> b >> n;
    int count = 0;
    int temp;
    while(n--) {
        cin >> temp;

        if (temp >= a) count += a-1;
        else count += temp;
    }
    count += b;
    cout << count << endl;
    return;
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}