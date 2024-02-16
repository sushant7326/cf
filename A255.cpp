#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int x[t];
    int chest=0;
    int biceps=0;
    int back=0;
    for(int i=0; i<t; i++){
        cin>>x[i];
        if(i%3==0){
            chest = chest + x[i];
        }
        else if(i%3==1){
            biceps = biceps + x[i];
        }
        else{
            back = back + x[i];
        }
    }
    if(chest>biceps){
            if(chest>back){
                cout<<"chest";
            }
            else{
                cout<<"back";
            }
        }
    else{
        if(biceps>back){
            cout<<"biceps";
        }
        else{
            cout<<"back";
        }
    }
    cout<<endl;
}