#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a, b;
    if (n >= 0)
        cout << n;
    else
    {
        n = abs(n);
        a = (n / 10);
        b = ((n / 100) * 10) + (n % 10);
        cout << ((a < b) ? (-a) : (-b)) << '\n';
    }
}