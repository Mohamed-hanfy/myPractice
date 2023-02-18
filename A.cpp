#include <bits/stdc++.h>
using namespace std;
int main(){
  string n;
  int num=0;
  cin >>n; 
  int sz =n.size();
 for (int i = sz-1; i >=0 ; i--)
 {
    if(sz-i==4){
      num = n[i];
    }
 }
 cout <<num-'0';
  
}