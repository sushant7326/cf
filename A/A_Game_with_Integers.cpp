#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n % 3 == 0)
        cout << "Second" << endl;
    else
        cout << "First" << endl;
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
        solve();
    return 0;
}