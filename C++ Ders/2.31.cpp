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
address address1;
};
int main() {

  employee employee1={12,"Enes","Bilgisayar muh.",{"Rize",9}};
  cout << employee1.id << endl;
  cout << employee1.name << endl;
  cout << employee1.department<< endl;
  cout << employee1.address1.cityName << endl;
  cout << employee1.address1.no << endl;
  employee employee2;

  employee2.id=12;
  employee2.name ="Enes";
  employee2.department="Bilgisayar muh";
  employee2.address1.cityName="Rize";
  employee2.address1.no=9;
  // employee2.address1 ={"Rize",9} þeklindede iç içe olan structlar tanýmlanabýlýrdý.

  cout << employee2.id << endl;
  cout << employee2.name << endl;
  cout << employee2.department<< endl;
  cout << employee2.address1.cityName << endl;
  cout << employee2.address1.no << endl;




return 0;
}
