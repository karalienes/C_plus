#include<iostream>
using namespace std;

int main() {
/*int * ptr;
int a[]={1,2,3,4,5};
ptr=a;
cout << ptr[1]<< endl;*/

int *ptr =new int ;
*ptr =5;
  delete ptr;

cout << *ptr << endl;


return 0;
}
