#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int index=0; index<t; index++){
        int n; int k;
        cin>>n;
        cin>>k;
        long long res = floor((k-1)/(n-1));
        cout<<(k+res)<<endl;
    }
}