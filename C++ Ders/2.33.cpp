#include<iostream>
using namespace std;
struct student{
int id;
char letter ;
};
int main() {
int a=10;
cout << "Integer:"<< sizeof(int)<< endl;
cout << "Char:"<< sizeof(char)<< endl;
cout << "Float:"<< sizeof(float)<< endl;
cout << "Double:"<< sizeof(double)<< endl;
cout << "Student:"<< sizeof(student)<< endl;
return 0;
}
