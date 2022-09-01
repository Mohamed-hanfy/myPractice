#include <iostream>
using namespace std; 
int main ()
{
   int n, numbers[999];

   cin >> n;
   
   for (int i =0; i < n; i++)
   cin >> numbers[i]; 

   for (int i =0; i < n; i++)
   {
     if (numbers[i] != numbers[i-1])
     {
      cout << numbers[i] <<" ";
     }
   }
   return 0;
}
