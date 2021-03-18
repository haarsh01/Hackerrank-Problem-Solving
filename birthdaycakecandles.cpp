int birthdayCakeCandles(vector<int> candles) {
sort(candles.begin(), candles.end());
int count=0;
int index =candles.size()-1;
int tallest = candles[index];
while(tallest == candles[index]){
    count++;
    index--;
}
return count;
}