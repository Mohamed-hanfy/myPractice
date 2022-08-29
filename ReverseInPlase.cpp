#include<iostream>
using namespace std;

int main (){
   int n, numbers[200];
   cin >> n; 

   if (n > 200)
   {
      cout << "oh.. ingers must be less or eqal 200, thx"; 
      return 0 ; 
   }
   else{
        for (int i =0; i < n; i++)
     cin >> numbers[i];

    int tamp;

    for (int i =0; i <n/2; i++)
     {
        tamp = numbers[i]; 
        numbers[i] = numbers[n - i -1] ;
        numbers[n - i -1] = tamp;
     }

     for (int i =0; i < n ; i++) 
     cout << numbers[i] << " ";
     return 0;
   }
    

}