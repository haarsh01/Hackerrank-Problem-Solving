#include <bits/stdc++.h>

using namespace std;

int main () {

    int y;                                                                                                            //input year
    cin>>y;                                        
    if (y==1918){                                                                                       //special condition
        cout<<"26.09."<<y;                        
    }                                            
    else if (y>1918) {                                                                        //Gregorian calendar

     if (y%400==0 || (y%4==0 && y%100!=0)){   
  
         cout<<"12.09."<<y;                                                      //for leap year
     }                                       
     else {                                 
         cout <<"13.09."<<y;                                             //for normal year
     }                                    
    }                                    
    else {                                                                    //Julian Calendar
        if (y%4==0){                   
            cout<<"12.09."<<y;                                //for leap year
        }                           
        else {                     
            cout <<"13.09."<<y;                        //for normal year
        }
    }
   }