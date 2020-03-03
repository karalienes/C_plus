#include<iostream>
using namespace std;
struct employee{
int id;
string name;
string department ;
};
void  show(employee *employee){
cout << "Id:"<< employee->id << endl;
cout << "Name:"<< employee->name << endl;
cout << "Department:"<< employee->department << endl;
}

void showEmployee(employee employee){
cout << "Id:"<< employee.id << endl;
cout << "Name:"<< employee.name << endl;
cout << "Department:"<< employee.department << endl;
}
int main() {
employee employee1 ={12,"Enes","Bilgisayar muh."};
showEmployee(employee1);
show(&employee1);
return 0;
}
