long taumBday(long int b,long int w,long int bc, long int wc,long int z) 
{
 long cost;
 if(bc+z<wc){
     cost = b*bc+(bc+z)*w;
 }
 else if(wc+z<bc){
     cost = w*wc+(wc+z)*b;
 }
 else 
 cost=b*bc+w*wc;
 return cost;
 
}
