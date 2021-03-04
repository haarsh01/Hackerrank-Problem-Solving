#include <bits/stdc++.h>

using namespace std;

// Complete the utopianTree function below.


int main() {
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int a=1;
        int x;
        cin>>x;
        if(x==0){
            cout<<a<<endl;
        }
        else {
        for(int j=1; j<=x; j++){
                if(j%2==0){
                    a=a+1;
                }
                else {
                    a=a*2;
                }
            }
            cout << a << endl;
        }
    }
}