#include<iostream>
#include <string.h>
using namespace std;
int fun (int n)
{
cout << n<<" "; 
if (n ==1 ) 
return 1;
if (n %2 ==0)
fun (n/2);
else
fun(3*n+1);
}



int main(){
    fun(6);
 return 0;
}