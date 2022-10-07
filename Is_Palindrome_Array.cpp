#include <iostream>
using namespace std; 

int readarr(int arr[]){
int len;
cin >> len;
for (int i=0; i < len; i++){
    cin >> arr[i];
}
return len;
}
int Is_plainder (int arr[], int n)
{
 int st = 0, en = n - 1;
	while (st < en) {
		if (arr[st] != arr[en])
			return false;
		st++, en--;
	}
	return true;
}
int main() {
	int arr[100];
	int len = readarr(arr);
	cout<<Is_plainder(arr, len);
	return 0;
}
