vector<string> split_string(string);

// Complete the divisibleSumPairs function below.
int divisibleSumPairs(int n, int k, vector<int> ar) {
    int count =0, sum =0;
    for(int i=0; i<n; i++){
        for(int j=i+1;j<n;j++){
            sum = ar[i]+ar[j];
            if(sum%k==0)
            count++;
        }
    }
return count;
}