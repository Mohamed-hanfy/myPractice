#include <iostream>
#include <cassert>
using namespace std; 
int main ()
{
   int n;
   cin >> n; 
   const int max = 500+1;
   int frequency[max] ={0};
   for (int i =0; i<n; i++)
   {
      int value; 
      cin >> value;
      assert(0 <= value && value <= 500);
      frequency[value]++;
   }
   for (int i = 0; i < max; i++)
   {
      while (frequency[i])
      {
         --frequency[i];
         cout << i << "  ";
      }
   }
}

