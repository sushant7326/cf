#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n,x;
    cin >> n >> x;
    // int end = ((n%2==0)?n/2:(n-1)/2);
    // int count = 0;
    // int i;
    // for(i = 1; i<= end; i++){
    //     if(x%i==0 && x/i<=n){
    //         count+=2;
    //     }
    // }
    // if (n%2!=0 && x%i==0 && x/i<=n){
    //     count++;
    // }

    int count = 0;
    for (int i = 1; i <= n; i++){
        if(x%i==0 && x/i<=n){
            count++;
        }
    }
    cout<<count<<'\n';
}