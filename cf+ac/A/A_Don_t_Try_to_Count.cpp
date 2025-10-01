#include <bits/stdc++.h>
using namespace std;

bool helper(string x, string s)
{
    char charac = ' ';
    int res = s.find(x);
    if (res != string::npos)
    {
        charac = s[res + x.length()];
        if (x[0] == charac)
            return true;
        return false;
    }

    return true;
}

void solve()
{
    int lenX, lenS;
    cin >> lenX >> lenS;
    cin.ignore();
    string x, s;
    getline(cin, x);
    getline(cin, s);

    // if (x == s)
    // {
    //     cout << 0 << endl;
    //     return;
    // }
    // int count = 0;
    // bool found = false;
    // while (helper(x, s))
    // {
    //     if (x.find(s) != string::npos)
    //     {
    //         found = true;
    //         break;
    //     }
    //     else
    //     {
    //         x = x + x;
    //         count++;
    //     }
    // }
    // if (found)
    //     cout << count << endl;
    // else
    //     cout << -1 << endl;
    // return;

    int found = 0;
    int count = 0;
    int c = 6;
    while (c-- > 0)
    {
        if (x.find(s) != string::npos)
        {
            found = 1;
            break;
        }
        count++;
        x += x;
    }
    if (found)
        cout << count << endl;
    else
        cout << -1 << endl;
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