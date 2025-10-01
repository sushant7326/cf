#include <bits/stdc++.h>
using namespace std;

#define int long long

bool helper(const vector<int>& perm) {
    int n = perm.size();

    vector<int> pos(n + 1);
    for (int i = 0; i < n; i++)
        pos[perm[i]] = i;

    int left = pos[n];
    int right = pos[n];
    
    for (int x = n - 1; x >= 1; x--) {
        if (pos[x] == left - 1) {
            left--; 
        } else if (pos[x] == right + 1) {
            right++;
        } else {
            return false;
        }
    }

    return true;
}

void solve() {
    int n;
    cin >> n;
    vector<int> v;
    int temp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        v.push_back(temp);
    }

    if (is_sorted(v.begin(), v.end())) {
        cout << "YES" << endl;
        return;
    }
    else if (is_sorted(v.rbegin(), v.rend())) {
        cout << "YES" << endl;
        return;
    }

    if (helper(v)) {
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
    return;
    
}

int32_t main() {
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}