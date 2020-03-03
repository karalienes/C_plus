#include<iostream>
using namespace std;
class MyClass
{
public:
	MyClass();
	MyClass(int a, int b);

private:
	int a;
	int b;

};
MyClass::MyClass() {
	this->a = 5;
	this->b = 10;
	cout << "parametresiz calisti"<<endl;
	cout << a << " " << b << endl;
}
MyClass::MyClass(int a, int b) {
	this->a = a;
	this->b = b;
	cout << "parametreli calisti"<<endl;
	cout << a << " " << b;

}



int main() {


	MyClass k1;
	MyClass k2(5, 5);



	return 0;
}