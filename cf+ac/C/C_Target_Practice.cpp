#include <bits/stdc++.h>
using namespace std;

int calculate_score(int i, int j)
{
    if (i == 1 || i == 10 || j == 1 || j == 10)
        return 1;
    else if (i == 2 || i == 9 || j == 2 || j == 9)
        return 2;
    else if (i == 3 || i == 8 || j == 3 || j == 8)
        return 3;
    else if (i == 4 || i == 7 || j == 4 || j == 7)
        return 4;
    else
        return 5;
}

void solve()
{
    char temp;
    int score = 0;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cin >> temp;
            if (temp == 'X')
                score += calculate_score(i, j);
        }
    }
    cout << score << endl;
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