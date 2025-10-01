#include <iostream>

using namespace std;

int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int ans;
    int smallest = c;
    if (n % smallest == 0)
        ans = n / smallest;
    else
    {
        int temp;
        for (int i = 1; i < (n / b); i++)
        {
            temp = n - (b * i);
            if (temp % smallest == 0)
            {
                ans = temp / smallest + i;
                break;
            }
        }
    }
    cout << ans << endl;
}