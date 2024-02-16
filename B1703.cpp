#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t-->0){
        int n;
        cin >> n;
        string x;
        cin >> x;
        int count = 0;

        for (char a='A'; a<='Z'; a++){
            if (x.find(a) != string::npos){
                count++;
            }
        }
        cout<<(n+count)<<'\n';
    }
}