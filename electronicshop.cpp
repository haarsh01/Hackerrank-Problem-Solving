#include <bits/stdc++.h>

using namespace std;

int main() {
    int b, n, m;
    int keyboard[1001], usb[1001];
    
    int res = -1;
    cin >> b >> n >> m;
    for(int i=0; i<n; i++){
        cin >> keyboard[i];
    }
    
    for(int j=0; j<m;j++){
        cin >> usb[j];
    }
    
    //Main Logic
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m;j++){
            if(keyboard[i] + usb[j] <= b)
            res = max(res,keyboard[i]+usb[j]);
        }
    }
    cout << res << endl;
    return 0;
}