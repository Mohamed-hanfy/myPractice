#include <iostream>
using namespace std; 
	
int main() {
   string names;
   cin >> names;
   int sz = names.size();
   for(int i =0; i < sz; i++)
   {
    if(names[i]!=names[sz-i-1])
    {
        cout << "No";
        break;
    }
    else
    cout << "yes";
    break;
   }
    

}
