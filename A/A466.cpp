#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,m,a,b;
    int cost;
    cin>>n>>m>>a>>b;
    if(m*a>=b){
        cost = min((n/m)*b+(n%m)*a, ((n/m)+1)*b);
    }
    else{
        cost = n*a;
    }
    cout<<cost<<endl;
}