#include <iostream>
using namespace std; 
int str(int n){
    if (n==5) 
    cout << "*****" ;
    else if(n==4) 
    cout <<"****" ; 
    else if (n ==3) 
    cout << "***" ; 
    else if (n== 2)
    cout << "**" ;
    else if (n==1)
    cout <<"*" ;
      
}

int fun(const int &n){
   
cout << str(n) <<"\n";
    if (n==0) 
    return 1; 

    else 
    return fun(n-1);

}

 int main (){ 
    int n =5; 
    cout << fun(5)<<"\n";
  
    
 }