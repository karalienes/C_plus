#pragma once
#ifndef SPORCU_H
#define SPORCU_H
#include<string>
#include<iostream>
using namespace std;


class sporcu {
public:
	sporcu();
	/*sporcu(string, string);*/
	void setİsim(string a) {
		this->isim = a;
	}
	void setÜlke(string b) {
		this->ülke = b;
	}
	string getİsim() {
		return isim;
	}
	string getÜlke() {
		return ülke;
	}
	
protected:
	string ülke;
	string isim;

};
sporcu::sporcu() {
	string a, b;
	cout << "Patencinin ismini giriniz:";
	cin >> a;
	this->isim = a;
	cout << "Patencinin ulkesini giriniz:";
	cin >> b;
	this->ülke = b;

}
//sporcu::sporcu(string a, string b) {
//	this->isim = a;
//	this->ülke = b;
//}

#endif // !SPORCU_H
