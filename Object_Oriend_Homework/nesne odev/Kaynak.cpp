/*
Enes KARALÝ
365327
2.ogretim

*/



//#include "stdafx.h"
#include <iostream>
#include<fstream>
#include <ctime>
using namespace std;



class space {
public:

	class box {

	public:

		class cord {
		public:

			double x;
			double y;
			double merkezX;
			double merkezY;
			

		}value;

		double density;
		double witdth;
		double height;

	}RandomKutu[30];
	int x, y;
	double kutlemerkezX;
	double kutlemerkezY;
	int KutuSayisi;
	int uzay[30][30];
	int Register;
	int satirCounter;

	space(int a, int b) {
		x = a;
		y = b;
		Register = 0;
		satirCounter = 0;

		if (a < 0 || b < 0) {
			cout << "matrisin icine - deger girilemez." << endl;
			exit(1);
		}

		else {

			for (int i = 0; i < a; i++) {
				for (int j = 0; j < b; j++) {

					uzay[i][j] = 1;
				}

			}
		}


	}


	void UzayCizme(int, int, int);
	void doldurma(int, int, int,int);
	void Yazma();

};

void space::Yazma() {
	double ToplamX = 0;
	double agirlik = 0;
	double ToplamY = 0;

	ofstream dosya;
	dosya.open("uzay.txt");

	for (int say = 0; say < KutuSayisi; say++) {

		ToplamX += (RandomKutu[say].value.merkezX)*(RandomKutu[say].witdth*RandomKutu[say].height*RandomKutu[say].density);

		ToplamY += (RandomKutu[say].value.merkezY)*(RandomKutu[say].witdth*RandomKutu[say].height*RandomKutu[say].density);

		agirlik += (RandomKutu[say].witdth*RandomKutu[say].height*RandomKutu[say].density);

	}

	kutlemerkezX = (ToplamX / agirlik);
	kutlemerkezY = (ToplamY / agirlik);

	cout << "X ekseni kutle merkezi: " << kutlemerkezX << endl;
	cout << "Y ekseni kutle merkezi: " << kutlemerkezY << endl;

	for (int i = 0; i < KutuSayisi; i++) {


		cout << i + 1 << ". kutunun  kordinatlari: (" << RandomKutu[i].value.x << "," << RandomKutu[i].value.y << ")" << endl;
		cout << i + 1 << ". Yogunlugu: " << RandomKutu[i].density << endl;
		dosya << i + 1 << ". kutunun  kordinatlari: (" << RandomKutu[i].value.x << "," << RandomKutu[i].value.y << ")" << endl;

	}
	dosya << "X ekseni kutle merkezi: " << kutlemerkezX << endl;
	dosya << "Y ekseni kutle merkezi: " << kutlemerkezY << endl;


}

void space::UzayCizme(int kutuSayi, int maxBoyut, int yogunluk) {
	KutuSayisi = kutuSayi;
	char durdurucu;



	srand(time(NULL));

	for (int counter = 0; counter < kutuSayi; counter++) {


		for (int i = x - 1; i >= 0; i--) {
			for (int j = 0; j < y; j++) {
				if (uzay[i][j] == 0) {
					cout << "   ";
					continue;
				}
				cout << "[" << "*" << "]";

			}
			cout << endl;
		}
		cout << endl;

		RandomKutu[counter].witdth = rand() % maxBoyut + 1;
		RandomKutu[counter].height = rand() % maxBoyut + 1;
		RandomKutu[counter].density =rand() % yogunluk + 1;

		cout << "Bir tusa basiniz : ";
		cin >> durdurucu;
		cout << endl;


		doldurma(RandomKutu[counter].witdth, RandomKutu[counter].height,RandomKutu[counter].density, counter);


	}
	for (int i = x - 1; i >= 0; i--) {
		for (int j = 0; j < y; j++) {
			if (uzay[i][j] == 0) {
				cout << "   ";
				continue;
			}
			cout << "[" << "*" << "]";

		}
		cout << endl;
	}
	cout << endl;





}

void space::doldurma(int a, int b, int c, int sayac) {

	int sayac1 = 0;
	int sayac2 = 0;



	if (a > x || b > y) {
		cout << "Uzaya girilen degerler icin bosluk yok.";

	}
	else {

		if (Register + b <= y) {
			Register += b;
		}
		else {
			satirCounter += 3;
			Register = 0;
			Register += b;

		}


		RandomKutu[sayac].value.x = b;
		RandomKutu[sayac].value.y = a;
		RandomKutu[sayac].density = c;

		for (sayac1 = satirCounter; sayac1 < satirCounter + a; sayac1++) {
			for (sayac2 = Register - b; sayac2 < Register; sayac2++) {
				uzay[sayac1][sayac2] = 0;
				if ((sayac1 + 1 == satirCounter + a) && (sayac2 + 1 == Register)) {
					RandomKutu[sayac].value.merkezX = (satirCounter + a + satirCounter) / 2.00;
					RandomKutu[sayac].value.merkezY = (Register - b + Register) / 2.00;


				}
			}
		}

	}
}


int main()
{

	space S(10, 15);
	S.UzayCizme(10, 3, 3);
	S.Yazma();
	system("pause");
	return 0;
}