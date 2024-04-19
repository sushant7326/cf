#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int index=0; index<t; index++){
        int k;
        cin>>k;
        double sq = sqrt(k);
        int p = (int)sq;
        if(sq-p==0.0){
            cout<<p<<" "<<1;
        }
        else{
            int q = p+1;
            int t = k - (p*p);
            if(t<=q){
                cout<<t<<" "<<q;
            }
            else{
                cout<<q<<" "<<((2*q)-t);
            }
        }
        cout<<endl;
    }
}