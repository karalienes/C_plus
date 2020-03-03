#include<iostream>
using namespace std;
struct employee {
int id;
string name;
string department ;
};
int main() {

employee employee1 = {12,"Enes","Bilgisayar muh."};

employee * ptr = &employee1;

cout << employee1.department << endl;// obje uzerýnden struct ulasma
cout << ptr->department << endl;// poýnter ýle struct cagýrma


return 0;
}
