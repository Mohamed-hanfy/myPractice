#include <iostream>
using namespace std; 
struct student{
    char name; 
    int id;
    int grade; 
    int gpa;
};	
int menu() {
	int choice = -1;
	while (choice == -1) {
	std ::	cout << "\nEnter your choice:\n";
	std ::	cout << "1) Add new student\n";
	std ::	cout << "2) Print all students\n";
	std ::	cout << "3) Exit\n";

	std ::	cin >> choice;

		
	}
	return choice;
}
	
student student_arr[1000];
int added = 0; 

void read_student(){
    
   std :: cout << "Entre student name, id , grade, GPA" <<"\n";
   std ::  cin >> student_arr[added].name>> student_arr[added].id;
   std ::   cin >> student_arr[added].grade>> student_arr[added].gpa;
     
    added++;
}

void print_students(){
    for(int i=0; i < added; ++i){
        student e = student_arr[i];
        std ::   cout << e.name <<" his/her ID " << e.id<<"\n";
        std ::cout << "in grade " << e.grade << "got GPA" << e.gpa<<"\n";
    }
}

void IDCaard(){
    while ( true)
    {
        int choice = menu();
         
         if (choice ==1)
             read_student();
         else if (choice ==2 )
         print_students();
         else 
         break;
    }
    
}
int main(){
    IDCaard(); 
    return 0;
}

