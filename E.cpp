#include <bits/stdc++.h>
using namespace std; 
  

int fun(int n) 
{ 
    int count = 0; 
  
    for (int x = 0; x * x <= n; x++) { 
        for (int y = 0; y * y <= n; y++) { 
            if (x * x + y * y == n) { 
                count++; 
            } 
        } 
    }  

    return count;   }


 int main() {

     int n;

     cin >> n;

     cout << fun(n) << "\n";

     return 0;
     }
