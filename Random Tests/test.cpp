#include <iostream>
using namespace std;

struct rec{
    int l;
    int b;
};

void initialize(struct rec &a, int b, int c){
    a.l = b;
    a.b = c;
}

void change(struct rec &a, int b, int c){
    a.l = b;
    a.b = c;
}

void print(struct rec a){
    cout<<a.l;
    cout<<"\t"<<a.b<<endl;
}

int main(){
    struct rec a;    
    initialize(a,10,5);
    print(a);
    change(a,20,10);
    print(a);
}