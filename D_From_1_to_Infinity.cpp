#include <bits/stdc++.h>
using namespace std;

#define int long long

int digitSumUpto(int n) {
    if (n < 0) return 0;
    int sum = 0;
    int factor = 1;

    while (factor <= n) {
        int lower = n % factor;
        int curr = (n / factor) % 10;
        int higher = n / (factor * 10);

        sum += higher * 45 * factor;

        sum += (curr * (curr - 1) / 2) * factor;
        sum += curr * (lower + 1);

        factor *= 10;
    }
    return sum;
}

int sumFirstDigits(int number, int digits) {
    string s = to_string(number);
    int sum = 0;
    for (int i = 0; i < digits && i < (int)s.size(); i++) {
        sum += (s[i] - '0');
    }
    return sum;
}

void solve() {
    int k;
    cin >> k;
    int count = 9;
    int digits = 0;
    int prev_digits = 0;
    int i = 1;
    while ((k - digits) > 0) {
        prev_digits = digits;
        digits += count * i;
        count *= 10;
        i++;
    }

    i--;
    count /= 10;
    digits -= count * i;

    int no_of_digits = i;
    int digits_rem = k - digits;

    int complete_nos = digits_rem / no_of_digits;
    int incomplete_nos = digits_rem % no_of_digits;

    int n = pow(10, no_of_digits-1) - 1 + complete_nos;
    int incomplete_no = n + 1;
    
    int sum = digitSumUpto(n);
    if (incomplete_nos) sum += sumFirstDigits(incomplete_no, incomplete_nos);

    cout << sum << endl;
    return;
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}