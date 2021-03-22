int sockMerchant(int n, vector<int> ar) {
int count = 0;
sort (ar.begin(), ar.end());
for(int i=0; i<n;)
{
    if(ar[i] == ar[i+1])
    {
        count++;
        i+=2;
    }
    else
    i++;
}
return count;

}