#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int a;
        cin >> a;
        double n = static_cast<double>(360) / (180 - a);
        int m = n / 1;
        if (n == m)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}