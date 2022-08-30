#include <iostream>
using namespace std; 
int main ()
{

  int n , numbers[200];
   
   cin >> n; 

   for(int i = 0; i < n; i++)

   cin>> numbers[i];
     
     for (int i =0 ; i < n; i++)
     {
        
        if(numbers[i] < numbers[i+1] )
        
        {
            cout << "yes" <<"\n";
           break;
        }

        else 
           cout << "No" <<"\n";
           break;
     }

}