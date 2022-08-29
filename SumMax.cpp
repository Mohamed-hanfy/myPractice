#include<iostream>
using namespace std;

int main() {
	int N;

cin >> N;


int max1, max2; // we store here the 2 greatest values



// reding first 2 values

cin >> max1;

cin >> max2;



for (int i = 3; i <= N; ++i)

{

	if (max1 < max2)

	{

		swap(max1, max2); // sorting, max1 should be always not smaller than max2

	}



	int number;

	



	if (number > max2)

	{

		max2 = number;

	}

}



cout << max1 << " + " << max2 << " = " << max1 + max2 << endl;
}

