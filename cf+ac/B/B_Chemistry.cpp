#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    cin.ignore();
    string s;
    getline(cin, s);
    
    map<char, int> mp;
    for (char ch: s) {
        mp[ch]++;
    }

    int count = 0;
    for (auto it: mp)  {
        count += (it.second % 2 == 1)? 1: 0;
    }
    
    if (count <= (k+1)) {
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
    return;

}

int main() {
    int t;
    cin >> t;
    while(t-- > 0) solve();
    return 0;
}