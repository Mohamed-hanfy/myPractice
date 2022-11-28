#include <iostream>
#include <algorithm>
using namespace std;
 
struct Address {
	string street_name;
	int building_number = -1;
	int apartment_number = -1;
 
	Address() {
	}
	Address(string street_name_, int building_number_, int apartment_number_) {
		street_name = street_name_, building_number = building_number_;
		apartment_number = apartment_number_;
	}
};
 
struct Stduent {
	string name;
	int id = -1;
	Address address;
 
	Stduent() {
	}
	Stduent(string name_, int id_, Address address_) {
		name = name_, id = id_, address = address_;
	}
 
	void print() {
		cout << name << " " << id << " " << address.street_name
				<< " " << address.building_number << " "
				<< address.apartment_number << "\n";
	}
};
 
bool cmp_Address(Address& first, Address& second) {
	if (first.street_name != second.street_name)
		return first.street_name < second.street_name;
 
	if (first.building_number != second.building_number)
		return first.building_number < second.building_number;
 
	return first.apartment_number < second.apartment_number;
}
 
bool cmp_Student(Stduent& first, Stduent& second) {
	if (first.name != second.name)
		return first.name < second.name;
 
	if (first.id != second.id)
		return first.id < second.id;
 
	return cmp_Address(first.address, second.address);
}
 
int main() {
	Address address1("Canada way", 20, 210);
	Stduent s1("ziad", 101, address1);
	Stduent s2("mostafa", 110, Address("Vikings", 30, 15));
 
	Stduent arr[] { s1, s2, Stduent("mostafa", 110, Address("Aowa", 50, 15)) };
 
	sort(arr, arr + 3, cmp_Student);
 
	for (int i = 0; i < 3; ++i)
		arr[i].print();
 
	return 0;
}

