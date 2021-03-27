int pickingNumbers(vector<int> a) {
    sort(a.begin(), a.end());
    int len = 0, start = 0, num = 1;
    for(int i=1; i < a.size(); i++){
        if(a[i] - a[start] >= 2){
            num = 1;
            len = max(len, i-start);
            start = i;
        }else{
            num++;
        }
        
    }
    
return max(len, num);
}