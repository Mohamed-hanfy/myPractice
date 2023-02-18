#include <iostream>
#include <algorithm>
using namespace std;
 
template<class T>
void fun(T a) {
	cout << "[" << a << "]";
}
 
template<>
void fun(string str) {
	cout << "{{" << str << "}}";
}
 
int main() {
	fun(10.5), fun<string>("mostafa");
 
	return 0;
}



