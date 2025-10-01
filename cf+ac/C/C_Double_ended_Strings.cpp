#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    string a, b;
    cin >> a >> b;

    string small = "";
    string large = "";
    if (a.length() <= b.length()) {
        small = a;
        large = b;
    }
    else {
        small = b;
        large = a;
    }

    int small_len = small.length();
    int large_len = large.length();
    int min = large_len + small_len;

    for (int len = 1; len <= small_len; len++) {
        int left = 0;
        int right = len - 1;

        while (right < small_len) {
            string subs = small.substr(left, len);
            int size = subs.length();
            if (large.find(subs) != string::npos) {
                int diff = (small_len + large_len) - (2 * size);
                if (diff < min) min = diff;
            }
            left++;
            right++;
        }
    }
    cout << min << endl;
}

int32_t main() {
    int t;
    // t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}