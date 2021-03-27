int viralAdvertising(int n) {
int liked =2, shared=5, total_liked = 0;
if(n>1){
    for(int i=2; i<=n; i++){
        shared = int(shared/2)*3;
        liked += int(shared/2);
    }
}
return liked;
}
