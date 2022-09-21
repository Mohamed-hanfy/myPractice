#include<iostream>
using namespace std;

int main() {
	int n, val, low=0,uper=0 ;
    cin >> n; 
    for(int i=0; i<n; ++i){
  for(int j=0; j < n; ++j){
         cin >> val;

         if (i >= j){
            low+= val;
         }
          if (i <= j){
            uper+= val;
         }
       }
      
    }
     cout << low<<"\n" <<uper;


}

