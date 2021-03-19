vector<int> breakingRecords(vector<int> &scores) {
int min = scores[0], max= scores[0], most = 0, least =0;
for(int i=1; i<scores.size(); i++){
    if(scores[i] > max){
        max = scores[i];
        most++;
        
    }
    else if(scores[i] < min){
        min = scores[i];
        least++;
    }
}
return vector<int>({most, least});

}
