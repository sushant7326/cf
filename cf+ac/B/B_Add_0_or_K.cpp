#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    int g = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        g = gcd(g, arr[i]);
    }

    if (g == 1) {
        if (k % 2 == 1) {
            for (int i = 0; i < n; i++) {
                if (arr[i] % 2 != 0) {
                    arr[i] += k;
                }
            }
        } else {
            for (int i = 0; i < n; i++) {
                int r = arr[i] % (k + 1);
                arr[i] += k * r;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return;
}


int32_t main()
{
    int t;
    // t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}