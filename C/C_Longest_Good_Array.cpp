#include <bits/stdc++.h>
using namespace std;

void solve(){
    int t1, t2;
    cin >> t1 >> t2;

    double d = sqrt(2*(t2-t1)) + 0.5;
    int c = ceil(d);
    int f = floor(d);

    if (t2-t1 == ((c*f) / 2)) cout << c << endl;
    else cout << f << endl;
}

int main(){
    int t;
    cin >> t;
    while (t-->0){
        solve();
    }
}