#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    long long int sum = 0;
    for ( int i=0; i < n; i++){
        long long int num;
        cin >> num;
        sum += num;
    }
 cout << sum << endl;
} 
