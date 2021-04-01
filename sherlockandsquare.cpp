int squares(int a, int b) {
int count =0, num=1,sqr=1;
while(sqr<=b){
    if(sqr>=a && sqr<=b)
    count++;
    num++;
    sqr = num*num;
    
}
return count;

}