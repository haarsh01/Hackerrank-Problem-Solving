#include <bits/stdc++.h>

using namespace std;
int main(){
    /* Read input as specified in the question.
     * Print output as specified in the question.
     */
  int n,arr[1000000],sum=0;
  cin>>n;
    for (int i=0; i<n; i++ ){
        cin>>arr[i];
    }
for (int i=0; i<n; i++) {
    sum=sum+arr[i]; 
    
}
cout<<sum;
}
