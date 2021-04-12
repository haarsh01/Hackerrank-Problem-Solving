vector<int> permutationEquation(vector<int> p) {

vector<int> result;
int x=1,y;
while(x<=p.size()){
    for(int i=0; i<p.size();i++){
        if(p[i]==x){
            y=i+1;
            break;
        }
    }
    for(int i=0;i<p.size();i++){
        if(p[i]==y){
            y=i+1;
            break;
        }
    }
    result.push_back(y);
    x++;
}
return result;




 
}
