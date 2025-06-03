#include <iostream>
#include <array>
using namespace std;

bool check(const array<int, 4>& a) {
    return (a[0] < a[1]) && (a[3] < a[2]) && (a[0] < a[3]) && (a[1] < a[2]);
}

array<int, 4> rotate(const array<int, 4>& a) {
    return {a[3], a[0], a[1], a[2]}; // Rotates clockwise: [a3, a0, a1, a2]
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        array<int, 4> x;
        for (int i = 0; i < 4; i++) {
            cin >> x[i];
        }

        bool found = false;
        for (int i = 0; i < 4; i++) { // Try all 4 rotations
            if (check(x)) {
                cout << "YES\n";
                found = true;
                break;
            }
            x = rotate(x); // Apply rotation
        }
        
        if (!found) {
            cout << "NO\n";
        }
    }
    return 0;
}