#pragma once
#ifndef PATENCÝ_H
#define PATENCÝ_H
#include<iostream>
#include<string>
#include"sporcu.h";
using namespace std;

class patenci :public sporcu {
public:
	int *skor;
	float ortalama = 0;
	patenci();
	//patenci(int, int);
	void setSkor(int a) {
		skor = new int[10];
		for (int i = 0; i < 10; i++) {
			skor[i] = 0;
		}
	}
	void setOrtalama(float a) {
		this->ortalama = a;
	}
	int getSkor() {
		return *skor;
	}
	float getOrtalama() {
		return ortalama;
	}
	int ortalamaa();
	void yazdýr();
};



patenci::patenci() {
	
	int tutucu = 0;
	int tutucu2 = 0;
	skor = new int[10];
	for (int i = 0; i < 10; i++) {
		cout << i + 1 << ". hakem degerini giriniz:";
		cin >> skor[i];
		cout << endl;
		/*tutucu = tutucu + skor[i];*/
		/*if (i + 1 == 10) {
			tutucu2 = tutucu / 2;
			cout << "Ortalama deger:" << tutucu << endl;
		}*/

	}
}

int patenci::ortalamaa() {
	
	for (int i = 0; i < 10; i++) {
		this->ortalama = this->ortalama + skor[i];
	}
	this->ortalama = this->ortalama / 10;
	cout << "Ortalama hakem degeri:" << ortalama << endl;
	return this->ortalama;

}
void patenci::yazdýr() {
	cout << "Skorlar:  ";
	for (int i = 0; i < 10; i++) {
		cout << skor[i] << " ";
	}
	cout << endl;
	cout << "isim:" << isim << endl;
	cout << "ulke" << ülke << endl;
	cout << "Ortalama" << this->ortalama << endl;
}
#endif // !PATENCÝ_H

