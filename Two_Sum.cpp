#include<iostream>
using namespace std;

int main(){
    
    int arr[4];
    int target; 
    cin >> target;
    for (int i=0; i< arr; i++)
           cin>>arr[i];

  
    for(int i=0; i<arr; i++){
       for(int j = i+1; j < arr; j++ ){
        int com = target-arr[i];
        if (arr[j] == com)
        cout << i << j;
       }
    }
        

  
   
    


}