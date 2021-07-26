#include<iostream>
using namespace std;

class Complex {
private:
	int real, img;
public:
	Complex() {
		cout << "yapýcý fonksýyon çalýþtýrýldý" << endl;
	}
	Complex(int,int);
	Complex operator +(Complex const& obj) {
		Complex res;
		res.real = real + obj.real;
		res.img = img + obj.img;
		return res;
	}
	void printf() {
		cout << real << "i +" << img << endl;

	}
};

Complex::Complex(int r, int i) {
	real = r;
	img = i;

}
int main() {
	Complex c1(10, 2), c2(5, 2);
	Complex c3 = c1 + c2;
	c3.printf();

	return 0;
}