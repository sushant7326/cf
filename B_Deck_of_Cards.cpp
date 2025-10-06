#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    if (n==k) {
        for (int i = 0; i < n; i++) cout << '-';
        cout << endl;
        return;
    }

    vector<int> num(3, 0);
    for (char ch: s) num[ch-'0']++;

    vector<char> v(n, '+');

    for (int i = 0; i < num[0]; i++) v[i] = '-';
    for (int i = 0; i < num[1]; i++) v[n-1-i] = '-';
    for (int i = 0; i < num[2]; i++) {
        v[num[0] + i] = '?';
        v[n - num[1] - i - 1] = '?';
    }

    for (auto it: v)  cout << it;
    cout << endl;
    return;
}

int32_t main() {
    int t;
    // t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}