int findDigits(int n) {
int count =  0, temp = n;
while(n>0)
{
    int x=n%10;
    if((x!=0) && (temp%x == 0))
    count++;
    n=n/10;
}
return count;
}