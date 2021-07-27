#pragma once
#ifndef ATLET_H
#define ATLET_H

#include<iostream>
#include<string>
using namespace std;

class atlet {
public:
	atlet();
	atlet(string, string, string);
	void set›sim(string);
	void setCinsiyet(string);
	void set‹lke(string);
	string get›sim();
	string getCinsiyet();
	string get‹lke();

protected:
	string isim;
	string cinsiyet;
	string ¸lke;
};
void atlet::set›sim(string a) {
	this->isim = a;
}
void atlet::setCinsiyet(string a) {
	this->cinsiyet = a;
}
void atlet::set‹lke(string a) {
	this->¸lke = a;
}
string atlet::get›sim() {
	return this->isim;
}
string atlet::get‹lke() {
	return this->¸lke;
}
string atlet::getCinsiyet() {
	return this->cinsiyet;
}
atlet::atlet() {
	set›sim("Yasemin");
	setCinsiyet("K");
	set‹lke("Turkiye");
}
atlet::atlet(string a, string b, string c) {
	set›sim(a);
	setCinsiyet(b);
	set‹lke(c);
}
#endif // !ATLET_H
