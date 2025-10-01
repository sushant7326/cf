#include <bits/stdc++.h>
using namespace std;

void solve() {
    char temp;
    int count = 1;
    int maxi = INT_MIN;
    
    int n;
    cin >> n;
    vector<char> v;
    cin >> temp;
    v.push_back(temp);
    for (int i = 1; i < n; i++) {
        cin >> temp;
        v.push_back(temp);
        if (v[i] == v[i-1]) count++;
        else {
            maxi = max(maxi, count);
            count = 1;
        }
    }
    maxi = max(maxi, count);
    cout << (maxi+1) << endl;
    return;
}

int main () {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}