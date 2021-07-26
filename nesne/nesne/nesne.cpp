#include<iostream>
#include<string>
#include<fstream>
#include"matris.h"
#include"table.h"
#include"ýmage.h"



using namespace std;

int main() {

	//matris k1;
	//k1.EkranaYaz();
	//matris<int> k2(2, 2, 'e');
	//matris k3(2, 2, 'r');
	//matris k4(5, 5, 5);
	//matris k5(2, 2, 5);
	//k2.emul(k5);
	matris<int> m1(3, 3, 2);
	matris<int> m2(3, 4, 3);
	m1.EkranaYaz();
	cout << endl;
	m2.EkranaYaz();
	cout << endl;
	m1 = m1 + m2;
	m1.EkranaYaz();
	/*m2.tranpoze();
	m2.EkranaYaz();*/
	//m2.MatrisTersi();
	//m1.detarminant();
	//m1 = m1 ^ 2;
	//m1.EkranaYaz();
	//m2 = m2 % 3;
	//m2.EkranaYaz();
	//m1.EkranaYaz();
	//k2.EkranaYaz();
	//k5.EkranaYaz();
	//k5.DosyaYaz("enes.txt");
	//k3.tranpoze();
	//matris k6(2, 2, 'e');
	//k6.emul(k2);
	/*k2.resize(4,4);
	k2.EkranaYaz();*/
	//system("Pause");
	/*ýmage i1;
	i1.GörüntüAl();*/
	//ýmage<int> i2("image3", "bmp");
	//i2.color2Gray();
	//i2.gray2Binary(100);
	//i2.dilation();
	//i2.opening();
	//i2.closing();
	//i2.imread("ýmage", "bin");
	//i2.imWrite("deneme", "txt");
	//ýmage i3(34, 34);
	//table<int> t1(4, 5, 'r');
	/*string s[] = { "0. satýr","1. satýr","2. satýr" };
	t1.setColNames(s, 3);*/
	//t1.itemAt("A3");
//	table t1;
	//table t2(3, 3, 3);
	/*cout << endl;
	table t2(4, 5, 'r');
	cout << endl;
   int a= t2.itemAt("A","1");
   cout << a;*/
	system("pause");
	return 0;
	
	
	
}