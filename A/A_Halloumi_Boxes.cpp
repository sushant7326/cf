#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> nums;
    int temp;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        nums.push_back(temp);
    }

    if (k >= 2)
    {
        cout << "YES\n";
        return;
    }
    bool sorted = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] <= nums[i + 1])
            continue;
        sorted = false;
    }
    if (sorted)
        cout << "YES\n";
    else
        cout << "NO\n";
    return;
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