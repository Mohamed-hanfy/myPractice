#include <iostream>
using namespace std; 
int main ()
{
    int n , numbers[200], max= -1 , min= 10000;
    cin >>n ; 

    for (int i = 0; i < n ; i++)
    cin >> numbers[i];

     

    for (int i = 1; i < n; i++)
    {
          if (numbers[i] > max)

          {
                    max = numbers[i];
          }
           if (numbers[i] < min)

          {
                    min = numbers[i];
          }
    }
   for (int i = 0; i < n; i++) {
		if (numbers[i] == min)

        {
            	numbers[i] = max;
        }
		
		else if (numbers[i] == max)

        {
            numbers[i] = min;
        }
			
            
            cout << " "<< numbers[i];
	}

	
}
