#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double n;
    long long k, x;
    cin >> n;
    cin >> k;
    x = ceil(n / 2);
    if (k <= x)
        cout << ((2 * k) - 1);
    else
        cout << (2 * (k - x));
    return 0;
}