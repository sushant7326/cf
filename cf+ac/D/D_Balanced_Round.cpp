#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int max_streak = INT_MIN;
    int count = 1;
    int diff;
    for (int i = 1; i <n; i++) {
        diff = v[i] - v[i-1];
        if (diff <= k) count++;
        else {
            max_streak = max(max_streak, count);
            count = 1;
        }
    }
    max_streak = max(max_streak, count);
    cout << (n-max_streak) << endl;
    return;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}