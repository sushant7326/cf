#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    char a[n];
    char b[n];
    char c[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    for(int i = 0; i<n; i++){
        cin>>b[i];
    }
    for(int i = 0; i<n; i++){
        cin>>c[i];
    }
    
    int x = 1;
    for(int i=0; i<n; i++){
        if(!(c[i]==a[i] || c[i]==b[i])){
            x = 0;
            break;
        }
    }
    if(x==0){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}

int main(){
    int t;
    cin>>t;
    while (t-->0){
        solve();
    }
}