#include <iostream>
using namespace std;

int main() {
   const int N = 201;
   int sequence[N], indx;
   int occurrence[N * 10]={0}; 

   cin >> indx;
   sequence[0]=0;
   occurrence[0]=1;
   for(int i =1; i <= indx; i++){
    int cur = sequence[i -1] - (i-1) -1;

    if(cur < 0 || occurrence[cur])
       cur = sequence[i -1] + (i-1) +1;

       sequence[i] = cur;
       occurrence[cur]=1;
   }
   cout << sequence[indx];
}


