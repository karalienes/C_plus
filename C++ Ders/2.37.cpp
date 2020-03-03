#include<iostream>
using namespace std;

int main() {
int *ptr1 =nullptr;
int *ptr2 =nullptr;

ptr1=new int;
*ptr1=10;
ptr2=ptr1;
delete ptr1;

*ptr2=20;
cout << *ptr2<< endl;
// danglýng referansda run týme hatasý gosterýlmýstýr.
return 0;
}
