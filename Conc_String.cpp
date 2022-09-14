#include <iostream>
using namespace std; 
int main ()
{
    string first , secound;
    cin >> first >> secound;
    int max_size = first.size();

    if (max_size < secound.size())
    {
        max_size = secound.size();
    }
    
    for(int i =0; i < max_size; i++)
    {
        if(i < first.size())
        {
          cout << first[i];
        }
        if (i < secound.size())
        {
            cout << secound[i];
        }
    }
   
       

}