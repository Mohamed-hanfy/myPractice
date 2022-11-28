#include <iostream>
#include <algorithm>
using namespace std;

struct employee{
   string name; 
   int age; 
   double salary; 
   char gender;

   void read_employee(){
      cout << "Entre name, age, salary, gender"<<"\n"; 
      cin >> name >> age; 
      cin >> salary >> gender;
   }

   void print_employee(){
      cout << name << " Has salary " <<salary <<"\n"; 
   }
   

}; 
employee employee_arr[1000];
int added =0;

void print_employees(){
   for(int i=0; i < added; ++i)
   employee_arr[i].print_employee();
}

bool compare_name(employee &a, employee &b){
   return a.name < b.name;

}

bool compare_salary(employee &a, employee &b){
   return a.salary >b.salary;
}
bool compare_name_salary(employee &a, employee&b){
   if(a.name != b.name)
      return a.name < b.name;
   return a.salary < b.salary;
}



int main (){
   employee_arr[added++].read_employee();
   employee_arr[added++].read_employee();
       employee_arr[added++].read_employee();
       sort(employee_arr,employee_arr + added,compare_name);
          print_employees();
           sort(employee_arr,employee_arr + added,compare_salary);
          print_employees();
           sort(employee_arr,employee_arr + added,compare_name_salary);
          print_employees();
   return 0;
}