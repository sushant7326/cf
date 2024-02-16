#include <iostream>
using namespace std;

bool check(int a[]){
    if((a[0]<a[1]) && (a[3]<a[2]) && (a[0]<a[3]) && (a[1]<a[2])){
        return true;
    }
    else{
        return false;
    }
}

int* rotate(int a[]){
    int ret[4];
    ret[0]=a[3];
    ret[1]=a[0];
    ret[2]=a[1];
    ret[3]=a[2];
    return ret;
}

int* clone(int a[]){
    int ret[4];
    for(int i=0; i<4; i++){
        ret[i]=a[i];
    }

}

int main(){
    int t;
    cin>>t;
    for(int index=0; index<t; index++){
        int x*;
        for(int i=0; i<4; i++){
            cin>>x[i];
        }
        int y*;
        int flag=1;
        for(int i=1; i<4; i++){
            if(check(x)){
                cout<<"YES"<<endl;
                flag=0;
                break;
            }
            else{
                y=rotate(x);
                x=clone(y);
            }
        }
        if(flag==1){
            cout<<"NO"<<endl;
        }

    }
}