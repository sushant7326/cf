#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    int n1, n2;
    int diff;
    int max = 0;
    n1 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> n2;
        diff = n2 - n1;
        if (diff > max)
            max = diff;
        n1 = n2;
    }
    diff = (x - n2) * 2;
    if (diff > max)
        max = diff;
    cout << max << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
        solve();
    return 0;
}