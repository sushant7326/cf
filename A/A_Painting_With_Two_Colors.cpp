#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    if ((n - b) % 2 == 0)
    {
        if (b >= a) cout << "YES" << endl;
        else
        {
            if ((n - a) % 2 == 0) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    else cout << "NO" << endl;
}

int main()
{
    int t;
    // t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}