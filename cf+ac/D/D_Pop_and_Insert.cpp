#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;
    string x;
    cin >> x;

    int count0 = 0;
    int count1 = 0;

    for (char ch: x) {
        if (ch == '0') count0++;
        else count1++;
    }

    if (count0 == n || count1 == n) {
        cout << 0 << endl;
        return;
    }

    int max_len= 0;
    int count = 1;
    int ans = 0;
    int min_ans = 1e9;
    char max_char = x[0];
    for (int i = 1; i < n; i++) {
        if (x[i] == x[i-1]) count++;
        else {
            if (x[i-1] == '1') ans = ((count1 - count) * 2) + count0;
            else ans = ((count0 - count) * 2) + count1;

            if (ans < min_ans) min_ans = ans;

            // if (count > max_len) {
            //     max_len= count;
            //     max_char = x[i-1];
            // }

            count = 1;
        }
    }
    // if (count > max_len) {
    //     max_len= count;
    //     max_char = x[n-1];
    // }
    if (x[n-1] == '1') ans = ((count1 - count) * 2) + count0;
    else ans = ((count0 - count) * 2) + count1;

    if (ans < min_ans) min_ans = ans;

    // int ans = 0;
    // if (max_char == '1') ans = ((count1 - max_len) * 2) + count0;
    // else ans = ((count0 - max_len) * 2) + count1;

    cout << min_ans << endl;
    return;

}

int32_t main() {
    int t;
    // t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}