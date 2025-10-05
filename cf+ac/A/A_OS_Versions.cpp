#include <bits/stdc++.h>
using namespace std;

#define int long long

int helper (vector<string>& order, string value){
    if (value==order[0]) return 0;
    if (value==order[1]) return 1;
    if (value==order[2]) return 2;
    return 3;
}

void solve() {
    string x, y;
    cin >> x >> y;

    vector<string> order = {"Ocelot", "Serval", "Lynx"};
    int a = helper(order, x);
    int b = helper(order, y);
    if (a < b) cout << "No";
    else cout << "Yes";
    
    return;
}

int32_t main() {
    int t;
    t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}