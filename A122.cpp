#include <iostream>
using namespace std;

void fun(int b){
    int a[14] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    for(int i = 0; i<14; i++){
        if(b%a[i]==0){ 
            cout<<"YES\n"; 
            return;
        }
    }
    cout<<"NO\n";
    return;
}

int main(){
    int n;
    cin>>n;
    fun(n);
    
}