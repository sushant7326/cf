#include <bits/stdc++.h>
using namespace std;

void solve () {
    int n, m;
    cin >> n >> m;
    cin.ignore();

    vector<string> v(n);
    for (int i = 0; i < n; i++) getline(cin, v[i]);

    vector<int> count(n, 0);
    for (int i = 0; i < m; i++) {
        vector<vector<int>> a(2);
        for (int j = 0; j < n; j++) a[v[j][i]-'0'].push_back(j);

        if (a[0].size()==0 || a[1].size()==0) {}
        else if (a[0].size() < a[1].size()) for (int i: a[0]) count[i]++;
        else if (a[1].size() < a[0].size()) for (int i: a[1]) count[i]++;
    }
    int max = INT_MIN;
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        if (count[i] > max) {
            max = count[i];
            ans.clear();
            ans.push_back(i+1);
        } 
        else if (count[i] == max) ans.push_back(i+1); 
    }  

    for (int i: ans) cout << i << " ";
    return;
}

int main () {
    int t;
    t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}