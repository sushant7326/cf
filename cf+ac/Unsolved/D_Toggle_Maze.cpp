#include <bits/stdc++.h>
using namespace std;

void fun (vector<string> &grid, int &curr, int &end) {
    
}

void solve() {
    int h, w;
    cin >> h >> w;
    cin.ignore();
    int[] start = {INT_MIN, INT_MIN};
    int[] end = {INT_MIN, INT_MIN};
    vector<string> grid(h);
    for (int i = 0; i < h; i++) getline(cin, grid[i]);

    start = {0,0};
    for (int i = 0; i < h; i++) {
        if (grid[i][w-1] == 'G') {
            end = {i,w-1};
            break;
        }
    }

    return;
}

int main () {
    int t;
    t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}