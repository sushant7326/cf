#include <iostream>
using namespace std;

bool is(int x){
    return (x%2!=0);
}

int main(){
    int t;
    cin>>t;
    for(int index=0; index<t; index++){
        int a,b;
        cin>>a;
        cin>>b;
        int result;
        if(a>b){
            if((is(a) && is(b)) || (!is(a) && !is(b))){
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }
        else if(a==b){
            cout<<0<<endl;
        }
        else{
            if((is(a) && is(b)) || (!is(a) && !is(b))){
                cout<<2<<endl;
            }
            else{
                cout<<1<<endl;
            }
        }
    }
}