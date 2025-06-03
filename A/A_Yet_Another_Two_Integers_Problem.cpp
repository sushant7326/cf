#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int a, b;
        cin >> a >> b;
        int c = abs(a - b);
        cout << ((c / 10) + ((c % 10 == 0) ? 0 : 1)) << endl;
    }
}