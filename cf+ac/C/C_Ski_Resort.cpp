#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, k ,q;
    cin >> n >> k >> q;

    int temp;
    int streak = 0;
    vector<int> streaks;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (temp <= q) streak++;
        else if (streak) {
            streaks.push_back(streak);
            streak = 0;
        }
    }
    if (streak) streaks.push_back(streak);

    int sum = 0;
    for (int it: streaks) {
        if (it >= k) {
            for (int i = k; i <= it; i++) sum += (it-i+1);
        }
    }

    cout << sum << endl;
    return;
}

int32_t main() {
    int t;
    // t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}