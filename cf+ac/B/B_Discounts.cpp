#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<int> vn;
    vector<int> vk;

    int temp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        vn.push_back(temp);
    }
    for (int i = 0; i < k; i++) {
        cin >> temp;
        vk.push_back(temp);
    }

    sort(vn.begin(), vn.end());
    sort(vk.begin(), vk.end());

    int sum = 0;
    bool flag = false;
    for(int i = 0; i < k; i++) {
        int num = vk[i];
        int rem = vn.size();
        if (num <= rem) {
            for (int j = 1; j <= num; j++) {
                if (j != num) sum += vn.back();
                vn.pop_back();
            }
        }
        else {
            break;
        }
    }

    if (vn.size() > 0) for (auto it: vn) sum += it;

    cout << " " << sum << endl;
    return;
}

int32_t main() {
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}