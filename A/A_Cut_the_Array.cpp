#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }

    int s1 = 0;
    for (int i = 0; i < n-1; i++) {
        s1 += v[i];
        int s2 = 0;
        for (int j = i+1; j < n; j++) {
            s2 += v[j];
            int s3 = sum - s1 - s2;
            int m1 = s1%3, m2 = s2%3, m3 = s3%3;
            if ((m1!=m2 && m2!=m3 && m3!=m1) || (m1==m2 && m2==m3)) {
                cout << (i+1) << " " << (j+1) << endl;
                return;
            }
        }
    }
    cout << "0 0" << endl;
}

int32_t main() {
    int t;
    cin >> t;

    while (t--) solve();
    return 0;
}