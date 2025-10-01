#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int temp;
    map<int, int> nums;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        nums[temp]++;
    }
    int length = nums.size();
    if (length >= 3)
    {
        cout << "No" << endl;
        return;
    }
    else if (length == 1)
    {
        cout << "Yes" << endl;
        return;
    }
    else
    {
        vector<int> values;
        int diff;
        for (auto it : nums)
            values.push_back(it.second);
        diff = values[0] - values[1];
        if (abs(diff) == 0 || abs(diff) == 1)
        {
            cout << "Yes" << endl;
            return;
        }
    }
    cout << "No" << endl;
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