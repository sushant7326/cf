#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, q;
    cin >> n >> q;
    map<int,int> mp;

    for (int i = 1; i <= n; i++) {
        mp[i]++;
    }

    for (int i = 0; i < q; i++) {
        int x, y;
        cin >> x >> y;

        int sum = 0;

        auto it = mp.begin();
        while (it != mp.end()) {
            int f=it->first;
            int s=it->second;
            
            if(f<=x){
                sum+=s;
            }else{
                break;
            }
            it= mp.erase(it);
        }

        mp[y] += sum;
        cout << sum << endl;
    }

    return;
}   
int32_t main() {
    int t;
    t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}