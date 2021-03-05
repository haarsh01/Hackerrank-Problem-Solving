#include <bits/stdc++.h>

using namespace std;
int main (){
    int n; // hour
    string s; // for rest
    cin >> n;
    cin >> s;
    if(s[6] == 'P'){ // AM PM at 6th position
        if(n==12){ // for PM
        cout << n;
            
        }
        else{
            n=n+12; // convert 24hr
            cout << n;
        }
        
    }
    else {  // for AM
        if(n==12){
            cout << "00";
        }
        else {
            cout << "0" << n;
        }
    }
    s.erase(6);
    cout << s; // print string
    return 0;
}