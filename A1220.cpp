#include <iostream>
#include <string>
using namespace std;

int main(){
    int l;
    cin>>l;
    string seq;
    cin>>seq;
    int countz=0;
    int countn=0;
    for(int i=0; i<l; i++){
        if(seq[i]=='z'){
            countz++;
        }
        else if(seq[i]=='n'){
            countn++;
        }
    }
    for(int i=0; i<countn; i++){
        cout<<"1 ";
    }
    for(int i=0; i<countz; i++){
        cout<<"0 ";
    }
}