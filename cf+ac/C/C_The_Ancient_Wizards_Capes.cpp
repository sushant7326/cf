#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll MOD = 676767677;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    if (n == 1)
    {
        if (a[1] != 1)
            cout << 0 << '\n';
        else
            cout << 2 % MOD << '\n';
        return;
    }

    bool bad = false;
    for (int i = 1; i < n; i++)
    {
        if (abs(a[i] - a[i + 1]) > 1)
        {
            bad = true;
            break;
        }
    }
    if (bad)
    {
        cout << 0 << '\n';
        return;
    }

    vector<int> s(n);
    for (int i = 1; i < n; i++)
        s[i] = 1 - (a[i] - a[i + 1]);

    ll ways = 0;
    for (int start = 0; start <= 1; start++)
    {
        vector<int> b(n + 1, -1);
        b[1] = start;
        bool ok = true;
        for (int i = 1; i < n; i++)
        {
            int next = s[i] - b[i];
            if (next != 0 && next != 1)
            {
                ok = false;
                break;
            }
            b[i + 1] = next;
        }
        if (!ok)
            continue;

        vector<int> pref(n + 1, 0);
        for (int i = 1; i <= n; i++)
            pref[i] = pref[i - 1] + b[i];
        int totalL = pref[n];
        bool match = true;
        for (int i = 1; i <= n; i++)
        {
            int seen = pref[i] + (n - i + 1) - (totalL - pref[i - 1]);
            if (seen != a[i])
            {
                match = false;
                break;
            }
        }
        if (match)
            ways++;
    }
    cout << (ways % MOD) << '\n';
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