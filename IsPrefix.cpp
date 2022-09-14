#include <iostream>
using namespace std; 
int main ()
{
   string base , prefix;

   cin >> base >> prefix;

   for(int i; i < prefix.size(); i++)

   {

    if(base[i] == prefix[i])
    {
        cout << "yes"<<"\n";
        break;
    }
    
    else
    cout <<"No";

    break;

   }
   return 0;
}
