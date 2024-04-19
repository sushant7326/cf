#include <iostream>
using namespace std;


int main(){
    int t;
    cin>>t;
    for(int index=0; index<t; index++){
        int n, m;
        cin>>n;
        cin>>m;
        int x[n];
        for(int i=0; i<n; i++){
            cin>>x[i];
        }
        int i, j;
        for (i = 0; i < n - 1; i++){
            for (j = 0; j < n - i - 1; j++){
                if (x[j] > x[j + 1]){
                    int a = x[j];
                    x[j] = x[j+1];
                    x[j+1] = a;
                }            
            }
        }
        for(i=0; i<m; i++){
            cin>>x[i];
        }
        long long sum=0;
        for(i=0; i<n; i++){
            sum = sum + x[i];
        }
        cout<<sum<<endl;
    }
}