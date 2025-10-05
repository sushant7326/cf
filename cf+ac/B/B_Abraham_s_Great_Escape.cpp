#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, k;
    cin >> n >> k;

    if (k == (n*n)-1) {
        cout << "NO" << endl;
        return;
    }


    vector<vector<char>> grid(n, vector<char>(n, '.'));

    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n; j++) {
            if (k != 0) {
                grid[i][j] = 'U';
                k--;
            }
            else grid[i][j] = 'D';
        }
    }

    for (int i = 0; i < n; i++) {
        if (k != 0) {
            grid[n-1][i] = 'U';
            k--;
        }
        else grid[n-1][i] = 'R';
    }

    if (grid[n-1][n-1] == 'U' || grid[n-1][n-1] == 'R') grid[n-1][n-1] = 'L';

    cout << "YES" << endl;

    for (auto it1: grid) {
        for (auto it2: it1) cout<< it2;
        cout << endl;
    }

    return;
}   

int32_t main() {
    int t;
    // t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}