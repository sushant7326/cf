#include <iostream>
using namespace std;

struct rec{
    int l,b;
};

void initialize(struct rec &a, int b, int c){
    a.l = b;
    a.b = c;
}

void print(struct rec *a, int l){
    for(int i = 0; i<l; i++){
        cout<<a[i].l<<"\t"<<a[i].b<<endl;
    }
}

int main(){
    struct rec a[5];
    initialize(a[0],1,2);
    initialize(a[1],3,4);
    initialize(a[2],5,6);
    initialize(a[3],7,8);
    initialize(a[4],9,10);
    print(a,5);
}