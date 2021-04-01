int jumpingOnClouds(vector<int> c, int k) {
int e=100;
int i=0;
while(1){
    if(c[i] == 1)
    e=e-3;
    else 
    e=e-1;
    i=(i+k)%c.size();
    if(i%c.size() == 0)
    break;
    
      
}
return e; 
}