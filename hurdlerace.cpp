

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    cin >> n>>k;
    int a[n];
    
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int x = sizeof(a)/sizeof(a[0]);
    sort(a,a+x);
    if(a[n-1] <= k){
        cout <<"0"<< endl;
    }
    else{
        cout << a[n-1]-k<<endl;
    }
    
}