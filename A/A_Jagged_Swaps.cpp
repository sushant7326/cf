#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> nums;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        nums.push_back(x);
    }
    if (is_sorted(nums.begin(), nums.end()))
    {
        cout << "YES" << endl;
        return;
    }
start_of_count:
    int count = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1])
        {
            swap(nums[i], nums[i + 1]);
            count++;
        }
    }
    if (is_sorted(nums.begin(), nums.end()))
    {
        cout << "YES" << endl;
        return;
    }
    if (count > 0)
        goto start_of_count;
    if (is_sorted(nums.begin(), nums.end()))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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