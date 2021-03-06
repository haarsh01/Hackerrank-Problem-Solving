

#include <bits/stdc++.h>

using namespace std;

int main (){

int height[26];                // array to store heights
string str;                   // string

for (int i=0;i<26;i++){
    cin>>height[i];         // input heights
}

cin>>str;                 // input string

int l=str.length();     //calculate length of string

int max=0;            //to store max height

for (int i=0;i<l;i++){

 int p=str[i]-97;        // to find index no
  
 //checking which is max height
 if (height[p]>max){   
    max=height[p];
 }
}

int area=l*max;   //calculate area 

cout<<area;     //print area

}