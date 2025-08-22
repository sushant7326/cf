#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    for (int i = 10; i <= 99; i++) {
        int n = i;
        while (n > 0) {
            sum += n % 10;  // take last digit
            n /= 10;        // remove last digit
        }
    }

    cout << "Sum of digits = " << sum << endl;
    return 0;
}
