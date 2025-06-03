#include <bits/stdc++.h>
using namespace std;

long long C2(long long n)
{
    long long ret = n * (n - 1) / 2;
    return ret;
}

long long C3(long long n)
{
    long long ret = n * (n - 1) * (n - 2) / 6;
    return ret;
}

void solve()
{
    int n;
    cin >> n;
    int x;
    map<int, int> v2;
    // vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v2[x]++;
        // cin>>v[i];
    }

    // for(int i=0; i<n; i++){
    //     v2[v[i]]++;
    // }
    // sort(v.begin(),v.end());
    long long sum = 0;
    long long answer = 0;
    for (auto i : v2)
    {
        answer += C2(i.second) * sum + C3(i.second);
        sum += i.second;
    }
    cout << answer << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
        solve();
    return 0;
}