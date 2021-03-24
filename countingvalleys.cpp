int countingValleys(int steps, string path) {
int tracker = 0, valley = 0;
for(char& step :path ){
    if(step == 'D') tracker--;
    else if(step == 'U') tracker++;
    if(tracker == -1 && step == 'D') valley++;
}
 return valley;
}