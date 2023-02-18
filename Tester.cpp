#include<bits/stdc++.h>
using namespace std;
   bool prime(long long num){
      
       if (num ==2)
       return true;
       if(num <2||num%2==0)
       return false;
       else{
        long long x =sqrt(num);
   for (int i = 3; i <= x; i+=2)
    {
        if(num%i==0){
            return false;
        }
    }
       }
       return true;
   }
int main()
{
  long long n;
  cin >>n;
 int j= prime(n);
  if(j==1){
    cout <<"YES"<<"\n";
  }
  else
  cout <<"NO"<<"\n";

}