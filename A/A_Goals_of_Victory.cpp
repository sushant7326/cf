#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    long temp;
    long sum = 0;
    for (int i=0; i< n-1; i++) {
        cin >> temp;
        sum += temp;
    }
    sum *= -1;
    cout << sum << endl;
    return;
}

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
    return 0;
}