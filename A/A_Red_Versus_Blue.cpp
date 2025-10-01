#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, r, b;
    cin >> n >> r >> b;

    string s;

    int nreds = r / (b+1);
    int rem = r % (b+1);

    for (int i = 0; i < b; i++) {
        for (int j = 0; j < nreds; j++) s += "R";
        if (rem) {
            s += "R";
            rem--;
        }
        s += "B";
    }

    for (int i = 0; i < nreds; i++) s += "R";
    cout << s << endl;
    return;
}

int32_t main() {
    int t;
    // t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}