int saveThePrisoner(int n, int m, int s) {
m=m%n;
s=s+m-1;
if(s>n)
s=s%n;
if(s==0)
return n;
return s;

}
