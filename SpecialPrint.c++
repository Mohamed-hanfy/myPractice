#include<iostream>
using namespace std;

int main() {

int arr[100][100];

int rows, cols;
cin >> rows >> cols;

 for(int i=0; i<rows; ++i)
     for(int j=0; j<cols; ++j)
	 cin>> arr[i][j];

	// left diagonal
	int i=0, j=0;
	int leftt=0;

	while(i < rows && j < cols)
	leftt +=arr[i++][j++];

     //right diagonal
	 int rightt=0;
	 i=0, j=cols-1;
	 while(i< rows && j < cols)
	 rightt += arr[i++][j--];
     
	 //last row
	 int lastR =0;
	 j=0;
	 while( j < cols)
	 lastR += arr[rows-1][j++];

	 //last col
	 int lastC=0;
	 i=0;
	 while (i < rows)
lastC += arr[i++][cols-1];


	 cout << leftt <<"  " << rightt << "\n" << lastR << " "<< lastC;
	 
	

}

