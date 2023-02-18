#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, x, y; 
     int sum = 0,sum1 = 0, temp = 1; 
      int m,o,p;
      m=n;
      o=x;
      p=y;

    cin >> n >> x >> y; 
  
   
    for (int i = 0; i < x; i++) { 
        sum += (n % y); 
        n /= y; 
    } 
    
       for (int i = 0; i < o ; i++) 
       {     
        temp *= 10 ;     
        sum1 += ((m/temp) %p);   
     }     
    cout << sum1 <<" "<< sum <<"\n" ;     
     return 0 ;
}
