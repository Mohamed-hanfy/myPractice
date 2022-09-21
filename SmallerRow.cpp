#include<iostream>
using namespace std;

int main() {
    int arr[100][100];

    int rows,cols;
    cin >> rows >> cols;
   
    for (int i=0; i < rows; ++i)
         for(int j=0; j < cols; ++j)
         cin >> arr[i][j];
    
   int R1,R2;
 cin >> R1 >>R2;

   for (int j; j < cols; ++j){
        if(arr[R1-1][j]<=arr[R2-1][j]){
                    cout << "yes";
                } 
                else 
                cout << "No";
   }
                
  

}

