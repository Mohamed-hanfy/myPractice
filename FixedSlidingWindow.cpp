#include <iostream>
using namespace std;

int main() {
  const int N= 199;
  int n,k;
  int arr[N];

  cin >> k >> n;
  for (int i=0; i <n; i++)
       cin >> arr[i];

    int max_sum =0; 
    int min_indx=0;

    for(int i=0; i<k; i++)
    max_sum += arr[i];

    int sum = max_sum;

    for (int i =k; i < n; i++){
      sum = sum -arr[i-k] + arr[i];
      if (sum > max_sum)
      {
        max_sum = sum; 
      
      }
      
    }
   cout << max_sum;

}
