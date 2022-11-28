#include <iostream>
using namespace std; 

struct employee{
    string name ;
     int age;
     double salary;
     char gender;

     void read_employee(){
        cout<< "Entre your employye data" <<"\n";
        cin >> name >> age;
        cin >> salary >> gender;
     }

     void print_employee (){
        cout << name << " has salary " << salary <<"\n";

     }
     int get_age(){
        return age;
     }
     void set_age (int new_age){
        age = new_age;
     }
};
void print_employees(){
    for 
}