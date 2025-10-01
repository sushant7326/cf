#include <iostream>
using namespace std;

int div(int x)
{
    int count = 0;
    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            count++;
        }
    }

    return count;
}

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
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                int p = x[i];
                for (int k = i + 1; k <= j; k++)
                    p = p ^ x[k];
                if (p == 0)
                    continue;
                else if (div(p) % 2 == 0)
                    c++;
            }
        }
        cout << c << endl;
    }
}