#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, p;
    cin >> n >> p;
    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (b[j] < b[i]) {
                int temp = b[i];
                b[i] = b[j];
                b[j] = temp;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            else if (b[i] == b[j]) {
                if (a[j] > a[i]) {
                    int temp = b[j];
                    b[j] = b[i];
                    b[i] = temp;
                    temp = a[j];
                    a[j] = a[i];
                    a[i] = temp;
                }
            }
        }
    }

    int sum = 0;
    int num = n;
    for (int i = 0; i < n; i++) {
        if (num > 0) {
            num--;
            sum += p;
        }
        if (num > 0) {
            if (a[i] <= num) {
                sum += b[i] * a[i];
                num -= a[i];
            }
            else {
                sum += num * b[i];
                break;
            }
        }
    }

    int x = 0;
    bool flag = false;
    int i = 0;
    for (; i < n; i++) {
        x += a[i];
        cout << x << " ";
        if (x == num-1) break;
        if (x > num-1) {
            flag = true;
            break;
        }
    }
    cout << flag << endl;
    cout << endl << " " << x << " " << i << " ";
    int y = 0;
    if (!flag) {
        for (int j = 0; j <= i; j++) y += b[j];
    }
    else {
        for (int j = 0; j < i; j++) y += b[j];
        int req = num - x;
        y += req * b[i];
    }

    cout << y << endl;



    // cout << sum << endl;
    for (auto it: a) cout << it << " ";
    cout << endl;
    for (auto it: b) cout << it << " ";
    cout << endl << endl;

}

int32_t main() {
    int t;
    // t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}