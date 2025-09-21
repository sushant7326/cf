#include <bits/stdc++.h>
using namespace std;

#define int long long

int longestDescendingIndexDiff(vector<int> &arr)
{
    vector<pair<int, int>> filtered; // {value, original_index}
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != 0)
            filtered.push_back({arr[i], i});
    }

    if (filtered.size() < 2)
        return 0;

    int max_diff = 0;
    int start = 0;

    for (int i = 1; i < filtered.size(); i++)
    {
        if (filtered[i - 1].first > filtered[i].first)
        {
            // continue streak
            int diff = filtered[i].second - filtered[start].second;
            max_diff = max(max_diff, diff);
        }
        else
        {
            // reset streak start
            start = i;
        }
    }

    return max_diff;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    vector<int> new_arr(n + 1, 0);

    int z = 0;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == 0)
            z++;
        new_arr[arr[i]] = 1;
    }
    if (z == 1)
    {
        int leftOut = -1;
        for (int i = 1; i <= n; i++)
        {
            if (new_arr[i] == 0)
                leftOut = i;
        }
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] == 0)
            {
                arr[i] = leftOut;
            }
        }
    }

    int l = -1;
    int r = -1;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == 0 || arr[i] != i)
        {
            l = i;
            break;
        }
    }
    if (l == -1)
    {
        cout << 0 << endl;
        return;
    }

    for (int i = n; i > l; i--)
    {
        if (arr[i] == 0 || arr[i] != i)
        {
            r = i;
            break;
        }
    }

    if (r == -1)
    {
        cout << 0 << endl;
        return;
    }

    cout << r - l + 1 << endl;
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}