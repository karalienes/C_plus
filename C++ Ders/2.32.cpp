#include<iostream>
using namespace std;
struct address{
string cityName ;
int no;
};
struct employee{
int id;
string name;
string department;
address *address1;
};
int main(){
employee employee1;

  employee1.id=12;
  employee1.name ="Enes";
  employee1.department="Bilgisayar muh";

   address addres ={"Rize",9};
   employee1.address1 =&addres;
   employee * ptr =&employee1;

   cout << ptr->address1->cityName << endl;
    cout << ptr->address1->no << endl;
return 0;
}
