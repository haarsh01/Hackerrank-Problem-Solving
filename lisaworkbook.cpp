#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'workbook' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER k
 *  3. INTEGER_ARRAY arr
 */

int workbook(int n, int k, vector<int> arr) {
int cnt=0;
int pg=1;
for(int i=0; i<arr.size(); i++){
    int multipliar=1;
    int nq=arr[i];
    for(int j=1;j<=nq;j++){
        if(j<=k*multipliar){
            if(pg==j)
            cnt++;
        }
        else{
            pg++;
            if(pg==j)
            cnt++;
            multipliar++;
        }
    }
    pg++;
}
return cnt;
}