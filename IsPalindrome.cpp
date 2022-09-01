#include <iostream>
using namespace std; 
int main ()
{
   int n, numbers[999];

   cin >> n;
   
   for (int i =0; i < n; i++)

   cin >> numbers[i]; 

    if (n % 2 ==0)

    {
  
       cout << "please write odd number";
      return 0;

    }

   for (int i =0; i < n/2; i++)
   {
      if(numbers[i] != numbers[n-i-1] ) 
      {
          cout << "NO";

           return 0;
      } 
      else
        cout << "Yes";
        return 0;
   }
}
