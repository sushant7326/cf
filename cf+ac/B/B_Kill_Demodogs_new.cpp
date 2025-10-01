#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int index = 0; index < t; index++)
    {
        int n;
        cin >> n;
        long long r = 0;
        r = (n) * (n + 1) * (2 * n + 1) / 6;
        for (int i = 1; i < n; i++)
        {
            r = r + (i) * (i + 1);
        }
        // long long i = 1;
        // long long m = 1000000007;
        // i = (i*r) % m;
        // i = (i*2022) % m;
        r = r * 2022;
        long long r1 = (n) * (n + 1) * (4 * n - 1) * 337;
        cout << r << " " << r1 << endl;
    }
    return 0;
}