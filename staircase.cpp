#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
int main () {
    int n;
    cin >> n;
    int i=1;
    while(i<=n){
        int spaces =1;
        while(spaces <= n-i){
            cout << ' ';
            spaces = spaces + 1;
        }
        int j=1;
        while(j<=i){
            cout <<"#";
            j++;
        }
        cout << endl;
        i++;
    }
}
