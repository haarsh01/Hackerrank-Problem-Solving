int jumpingOnClouds(vector<int> c) {
  int jump= 0;
  int i=0;
    while(i<c.size()-1){
    if(c[i+2] == 0)
    i+=2;
    else 
    i++;
    jump++;
   
}
return jump; 
}