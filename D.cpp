#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,a,b,s;
  cin >>n>>a>>b>>s;

  if (s < n * a || s > n * b){
    cout <<"NO"<<"\n";
 
  }
  else cout <<"YES"<<"\n";
}