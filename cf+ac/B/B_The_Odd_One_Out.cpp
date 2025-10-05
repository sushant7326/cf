#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    string s;
    cin >> s;
    char a = s[0];
    char b;
    int count1 = 1;
    int count2 = 0;
    int n = s.length();

    for (int i = 1; i < n; i++) {
        if (s[i] == a) count1++;
        else {
            b = s[i];
            count2++;
        }
    }

    if (count1 == 1) cout << a << endl;
    else cout << b << endl;
}

int32_t main() {
    int t;
    t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}