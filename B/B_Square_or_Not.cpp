#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    string s;
    cin >> n >> s;

    int r = sqrt(n);
    if (r*r != n) {
        cout << "No" << endl;
        return;
    }

    for (int i = 0; i < r; i++){
        if (i == 0 || i == r-1){
            for (int j = 0; j < r; j++){
                int loc = i * r + j;
                if (s[loc] != '1'){
                    cout << "No" << endl;
                    return;
                }
            }
        }
        else{
            for (int j = 0; j < r; j++){
                int loc = i * r + j;
                if (j == 0 || j == r-1){
                    if (s[loc] != '1'){
                        cout << "No" << endl;
                        return;
                    }
                }
                else{
                    if (s[loc] != '0'){
                        cout << "No" << endl;
                        return;
                    }
                }
            }
        }
    }
    cout << "Yes" << endl;

}

int main(){
    int t;
    cin >> t;
    while (t-- > 0){
        solve();
    }
}