#include<iostream>
#include<fstream>
#include<string>

using namespace std;

class arac {
public:
	arac();
};
arac::arac() {
	cout << "arac aractýr";
}
class tekerlek {
public:
	tekerlek();
};
tekerlek::tekerlek() {

	cout << "tekerlek tekerektir";
}
class araba :public arac, public tekerlek {
public:
	
};
int main() {

	araba obj;
	system("Pause");



	return 0;
}