#include <bits/stdc++.h>
using namespace std;

#define int unsigned long long

void solve() {
    int n;
    cin >> n;
    
    string a;
    cin >> a;

    int m;
    cin >> m;

    string b;
    cin >> b;

    string c;
    cin >> c;

    string v = "", d = "";
    int i = 0;
    for (char ch: c) {
        if (ch == 'V') v = b[i] + v;
        if (ch == 'D') d += b[i];
        i++;
    }  
    cout << v << a << d << endl;
    return;
}

int32_t main () {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}