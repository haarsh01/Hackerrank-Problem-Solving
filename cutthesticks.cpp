vector<string> split_string(string);

// Complete the cutTheSticks function below.
vector<int> cutTheSticks(vector<int> arr) {
sort(arr.begin(), arr.end());
int shortest = INT_MIN;
vector<int> ans;
for(int i=0; i<arr.size(); i++){
    if(arr[i] > shortest){
        ans.push_back(arr.size() - i);
        shortest = arr[i];
    }
}
return ans;
}