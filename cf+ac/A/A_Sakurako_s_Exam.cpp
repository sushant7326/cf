#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;

    if (a == 0)
    {
        if (b == 0)
            cout << "YES" << endl;
        else if (b % 2 != 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    else if (a % 2 != 0)
        cout << "NO" << endl;

    else
        cout << "YES" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        solve();
    }
}