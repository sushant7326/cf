#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int index=0; index<t; index++){
        int n;
        cin>>n;
        long long r = 0;
        for(int i=1,j=1,c=0; c<=(2*(n-1));c++){
            if(c%2==0){
                r = r + (i*j);
                i++; 
            }
            else{
                r = r + (i*j);
                j++;
            }
        }
        long long i = 1;
        long long m = 1000000007;
        i = (i*r) % m;   
        i = (i*2022) % m;
        cout<<i<<endl;
    }
}