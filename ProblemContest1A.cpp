#include <iostream>
using namespace std;

int main(){
    long long n,m,a;
    cin>>n;
    cin>>m;
    cin>>a;
    long long p,q;
    if(n%a==0){p=n/a;}
    else{p=(n/a)+1;}

    if(m%a==0){q=m/a;}
    else{q=(m/a)+1;}

    cout<<p*q;
}