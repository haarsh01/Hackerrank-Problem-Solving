

#include <bits/stdc++.h>

using namespace std;

int main () {
    int n,p,f,b;
    cin >> n; // pages
    cin >> p; // required page
    f = p/2;
    if(n%2==0){
        b=(n-p+1)/2;
    }
    else{
        b=(n-p)/2;
    }
    cout << min(f,b);
    }