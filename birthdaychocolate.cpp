int birthday(vector<int> s, int d, int m) {
int sum =0; // for storing the total no. of ways
int len = s.size();
for(int i=0; i<len;i++){
    int sp=0; // storing sum of the m digits
    if((i+m) > len){
        return sum;
    }
    for(int j=0;j<m;j++){
        sp=sp+s[i+j];
    }
    if(sp==d){
        sum++;
    }
}
return sum;
}