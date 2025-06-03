#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int x1, y1, x2, y2;
        cin >> x1;
        cin >> y1;
        cin >> x2;
        cin >> y2;

        int res;

        if (y1 > y2)
            res = -1;
        else if (x1 == x2 && y1 == y2)
            res = 0;
        else
        {
            int a = (y2 - y1) + (x1 - x2);
            if (a > 0)
                res = a + (y2 - y1);
            else if (a < 0)
                res = -1;
            else
                res = y2 - y1;
        }
        cout << res << endl;

        t--;
    }
}