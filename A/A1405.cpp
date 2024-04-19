#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int index=0; index<t; index++){
        int n;
        cin>>n;
        int a[n];
        int b[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        if(n>2){
            for(int i=2; i<n; i++){
                b[i] = a[i-2];
            }
            b[1] = a[n-1];
            b[0] = a[n-2];
        }
        else if(n==2){
            b[0]=a[1];
            b[1]=a[0];
        }
        else{
            b[0]=a[0];
        }



        for(int i:b){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}