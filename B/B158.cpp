#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int j;
    cin >> j;
    int x;
    int n[4] = {0, 0, 0, 0};
    for (int i = 0; i < j; i++)
    {
        cin >> x;
        n[x - 1]++;
    }
    int val = n[3] + ceil(float(n[1]) / 2);
    if (n[0] < n[2])
    {
        val = val + n[2];
    }
    else if (n[0] == n[2])
    {
        val = val + n[0];
    }
    else
    {
        val = val + ((n[0] + 3 * n[2]) / 4);
    }
    cout << val;
}