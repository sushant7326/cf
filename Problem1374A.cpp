#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 1; i <= t; i++){
        int x, y, n, k;
        cin>>x;
        cin>>y;
        cin>>n;
        // if (n<x){
        //     cout<<y<<endl;
        // }
        // else{
        //     k = n;
        //     while(k%x!=y){
        //         k--;
        //     };
        //     cout<<k<<endl;
        // }
        k = ((n/x)*x)+y;
        if(k>n){
            k = k - x;
        }
        cout<<k<<endl;
    }
}