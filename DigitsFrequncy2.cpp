#include <iostream>
using namespace std;
int main()
{
   int n, i, j ,ctr,r;
   cin >> n;
    for (int i=0; i <10; i++ )
    {
        cout<< i << " ";
        ctr =0;
        for (j=n; j >0; j =j/10)
        {
          r= j %10; 
          if(r==i)
          {
            ctr++;
          }
        }
           cout << ctr<<"\n";
    }
}
