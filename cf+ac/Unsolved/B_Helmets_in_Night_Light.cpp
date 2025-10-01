#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, p;
    cin >> n >> p;
    vector<int> v;
    vector<pair<int, int>> combined;
    int temp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        v.push_back(temp);
    }
    for (int i = 0; i < n; i++) {
        cin >> temp;
        combined.push_back({temp,v[i]});
    }

    sort(combined.begin(), combined.end());
    



}

int main() {
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
    return 0;
}