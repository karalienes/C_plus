#pragma once
#ifndef YUZMETREKOSUCU_H
#define YUZMETREKOSUCU_H
#include<iostream>
#include<string>
#include"atlet.h"

using namespace std;
static int  kazananBitisZamaný = 9999;
static string kazananÝsim;
class YuzMetreKosucu :public atlet {
public:
	int BitisZamaniS;

	YuzMetreKosucu();
	void sonuc();
	void  setBitisZamani(int a) {
		this->BitisZamaniS =a;
	}
	int BitisZamani() {
		return this->BitisZamaniS;
	}

	
};
YuzMetreKosucu::YuzMetreKosucu() {
	string a;
	string b;
	string c;
	int tutucu2;
	cout << "isim giriniz:";
	cin >> a;
	cout << endl;
	setÝsim(a);
	cout << "ulke giriniz:";
	cin >> b;
	cout << endl;
	setÜlke(b);
	cout << "Cinsiyet giriniz(K/E):";
	cin >> c;
	cout << endl;
	setCinsiyet(c);
	cout << "DEGERI GIRINIZ:";
	cin >> tutucu2;
	setBitisZamani(tutucu2);
	if (kazananBitisZamaný > BitisZamaniS) {
		kazananBitisZamaný = BitisZamaniS;
		kazananÝsim = this->isim;
	}

}
void YuzMetreKosucu::sonuc() {
	cout << "Altin madalya kazananýn suresi:" << kazananBitisZamaný << endl;
	cout << "Kazanan kosucu:" << kazananÝsim;

}

#endif // !YUZMETREKOSUCU_H
