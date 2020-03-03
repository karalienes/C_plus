#include<iostream>
#include<string>
using namespace std;


int main() {
	string s1("Enes");
	string s2("KARALI");
	string s3;
	//aþýrý yüklenmiþ eþitlik ve iliþkisel operatörlerini test et
	cout << "s1:" << s1 << "   " << "s2:" << s2 << "    " << "s3:" << s3<<"\n"
		<< "s1==s2 yields   " << (s1 == s2 ? "true" : "false")<<"\n"
		<< "s1!=s2 yields   " << (s1 != s2 ? "true" : "false")<<"\n"
		<< "s1>=s2 yields   " << (s1 >= s2 ? "true" : "false")<<"\n"
		<< "s1<=s2 yields   " << (s1 <= s2 ? "true" : "false")<<"\n"
		<< "s1<s2 yields   " << (s1 < s2 ? "true" : "false")<<"\n"
		<< "s1>s2 yields   " << (s1 > s2 ? "true" : "false");
	cout << "\n\nTesting s3.empty()" << endl;
	if (s3.empty()) {
		cout << "s3 is empty;assigning s1 to s3" << endl;
		s3 = s1;
		cout << "s3:  " << s3 << endl;
		
	}
	cout << "\n\n s1+=s2 yields s1=";
	s1 += s2; 
	cout << s1;

	cout << "\n\ns1+=\"to you\" yields" << endl;
	s1 += "you too";
	cout << "s1:" << s1 << endl;
	//s1``nin 0 den 14 karakterini yazýyor.
	cout << "14 characters s1.substr(0,14), is \n"
		<< s1.substr(0, 14)<<endl;
	//s1``nin 15den sonraki karakterini yazýyordur.
	cout << "localation 15,s1.substr(15),is \n"
		<< s1.substr(15)<<endl;

	string s4(s1);
	cout << "s4:" << s4 << endl;



	return 0;
}