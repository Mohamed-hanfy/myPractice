#include <iostream>
#define MAX 100000
using namespace std; 
int main ()
{
   int n, numbers[999];

   cin >> n;
   
   for (int i =0; i < n; i++)

   cin >> numbers[i]; 

   int firstmin = MAX, secmin = MAX, thirdmin = MAX;
   for (int i =0; i < n; i++)
    {
        if(numbers[i] < firstmin)
        {
           thirdmin = secmin;
            secmin = firstmin;
            firstmin = numbers[i];
        }
        else if (numbers[i] < secmin)
        {
              secmin = thirdmin; 
              secmin = numbers[i]; 
        }
         else if (numbers[i] < thirdmin)
        {
            thirdmin = numbers[i];
        }

    }
    cout << firstmin << " " << secmin << " " << thirdmin << " ";
}
