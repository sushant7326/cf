#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    getline(cin, s);

    int ans = 0;
    int n = s.size();
    int a[2] = {0,0};

    for (int i = 0; i < n; i++) a[s[i]-'0']++;

    for (int i = 0; i < n; i++) {
        if (a[!(s[i]-'0')] > 0) a[!(s[i]-'0')]--;
        else {
            ans = n-i;
            break;
        }  
    }
    cout << ans << endl;
    return;
}

int main () {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) solve();
    return 0;
}