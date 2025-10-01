#include <bits/stdc++.h>
using namespace std;

void counting(int *count, int *total)
{
    if (*count == 0)
        *total += 0;
    else if (*count == 1)
        *total += 1;
    else
        *total += 2;
    *count = 0;
}

void solve()
{
    int n;
    cin >> n;
    char ch;
    char prev = ' ';
    int count = 0;
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ch;
        if (ch == '.')
            count++;
        else if (prev == '#')
            continue;
        else
            counting(&count, &total);
        prev = ch;

        if (count == 3)
        {
            for (int j = 0; j < (n - i - 1); j++)
                cin >> ch;
            cout << 2 << endl;
            return;
        }
    }
    counting(&count, &total);
    cout << total << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        solve();
    }
    return 0;
}