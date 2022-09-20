#include <iostream>
using namespace std; 
int main ()
{
  string base,suffix;
  cin >> base >> suffix;
   
   int N = base.size();
   int j = suffix.size();

   for(int i =0; i < suffix.size(); i++)
   {

    if (base[N-i-1] == suffix[j - i - 1])
    {
        cout << "Yes";
        break;
    }

    else 
    cout << "No";
    break;
   }

}
