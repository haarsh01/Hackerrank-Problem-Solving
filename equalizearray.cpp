int equalizeArray(vector<int> arr) { 
sort(arr.begin(),arr.end());
int max=0, freq=1;
for(int i=0; i<arr.size()-1;i++){
    if(arr[i] == arr[i+1])
    freq++;
    else{
        if(freq>max)
        max=freq;
        freq=1;
    }
}
if(freq>max)
max=freq;
return arr.size() - max;
}
