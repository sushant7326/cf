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
        int x[n];
        for (int i = 0; i < n; i++)
            cin >> x[i];
        long long p = 1;
        for (int i = 0; i < n; i++)
            p = p * x[i];
        p = p + (n - 1);
        p = p * 2022;
        cout << p << endl;
    }
}