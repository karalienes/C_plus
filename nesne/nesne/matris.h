#pragma once
#ifndef MATR›S_H
#define MATR›S_H
#include<string>
#include<ctime>
#include<iostream>
#include<conio.h>
using namespace std;
template <class enes>
class matris {
public:


	matris();
	matris(enes, enes, enes);
	void setX(enes a) {
		x = a;

	};
	void setY(enes b) {
		y = b;
	};
	void set›nglizceYogunluk(enes c) {
		›nglizceYogunluk = c;
	};
	enes getX() {
		return x;
	};
	enes getY() {
		return y;

	};
	enes get›ngilizceYogunluk() {
		return ›nglizceYogunluk;
	};
	void EkranaYaz();
	void DosyaYaz(string);
	void tranpoze();
	void emul(matris);
	void MatrisTersi();
	void resize(enes, enes);
	void detarminant();
	matris operator +(matris m2) {
		matris m1(m2.x, m2.y, m2.›nglizceYogunluk);
		for (int i = 0; i < x; i++) {
			for (int j = 0; j < y; j++) {
				m1.dizi[i][j] = dizi[i][j] + m2.dizi[i][j];
				//	cout << m1.dizi[i][j];
			}
		}
		return m1;
	}
	matris operator *(matris m2) {
		matris m1(x, y, ›nglizceYogunluk);
		int toplam = 0;
		for (int i = 0; i < x; i++)
		{
			for (int j = 0; j < y; j++)
			{

				for (int k = 0; k < y; k++)
				{
					toplam =toplam+ dizi[i][k] * m2.dizi[k][j];
				}
				m1.dizi[i][j] = toplam;
				toplam = 0;
			}
			
		}
return m1;
	}
	matris operator -(matris m2) {
			matris m1(m2.x, m2.y, m2.›nglizceYogunluk);
			for (int i = 0; i < x; i++) {
				for (int j = 0; j < y; j++) {
					m1.dizi[i][j] = dizi[i][j] - m2.dizi[i][j];
					//	cout << m1.dizi[i][j];
				}
			}
			return m1;
		}	
	matris operator *(enes xx) {
		matris m1(x, y, ›nglizceYogunluk);
			for (int i = 0; i < x; i++) {
				for (int j = 0; j < y; j++) {
					m1.dizi[i][j] = dizi[i][j] * xx;
				}
			}
			return m1;
		}
	matris operator -(enes xx) {
		matris m1(x, y, ›nglizceYogunluk);
		for (int i = 0; i < x; i++) {
			for (int j = 0; j < y; j++) {
				m1.dizi[i][j] = dizi[i][j] - xx;
			}
		}
		return m1;
	}
	matris operator +(enes xx) {
		matris m1(x, y, ›nglizceYogunluk);
		for (int i = 0; i < x; i++) {
			for (int j = 0; j < y; j++) {
				m1.dizi[i][j] = dizi[i][j] + xx;
			}
		}
		return m1;
	}
	matris operator /(enes xx) {
		matris m1(x, y, ›nglizceYogunluk);
		for (int i = 0; i < x; i++) {
			for (int j = 0; j < y; j++) {
				m1.dizi[i][j] = dizi[i][j] / xx;
			}
		}
		return m1;
	}
	matris operator %(enes xx) {
		matris m1(x, y, ›nglizceYogunluk);
		for (int i = 0; i < x; i++) {
			for (int j = 0; j < y; j++) {
				m1.dizi[i][j] = dizi[i][j] % xx;
			}
		}
		return m1;
	}
	matris operator ^(enes xx) {
		matris m1(x, y, ›nglizceYogunluk);
		int tutucu = 1;
		int** dizi3 = new enes * [x];
		for (int i = 0; i < x; i++) {
			dizi3[i] = new enes[y];
		}
		
		for (int i = 0; i < x; i++) {
			for (int j = 0; j < y; j++) {
				dizi3[i][j] = dizi[i][j];
				//	cout << dizi[i][j] << " ";
			}
			//	cout << endl;
		}
		while (tutucu < xx) {
			int toplam = 0;
			for (int i = 0; i < x; i++)
			{
				//toplam = 0;
				for (int j = 0; j < y; j++)
				{
					
					for (int k = 0; k < y; k++)
					{
						toplam = toplam + (dizi[i][k] * dizi3[k][j]);
					}
					m1.dizi[i][j] = toplam;
					toplam = 0;
				}

			}
			tutucu++;
			for (int i = 0; i < x; i++) {
				for (int j = 0; j < y; j++) {
					dizi3[i][j] = m1.dizi[i][j];
					//	cout << dizi[i][j] << " ";
				}
				//	cout << endl;
			}
		}
		return m1;
	}

protected:
	enes x;
	enes y;
	enes ›nglizceYogunluk;
	enes** dizi;


};
template<typename enes>
matris<enes>::matris() {
	
	setX(10);
	setY(10);
	set›nglizceYogunluk(0);
    dizi = new enes * [x];
	for (int i = 0; i <x; i++) {
		dizi[i] = new enes[y];
		}
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			dizi[i][j] = 0;
		//	cout << dizi[i][j] << " ";
		}
//	cout << endl;
	}
	
  }
template<typename enes>
matris<enes>::matris(enes a, enes b, enes c) {
	srand(time(0));
	setX(a);
	setY(b);
	set›nglizceYogunluk(c);
    dizi = new enes* [x];
	for (int i = 0; i < x; i++) {
		dizi[i] = new enes[y];
	}
	

	if (c=='r') {
		for (int i = 0; i < x; i++) {
			for (int j = 0; j < y; j++) {
	
				
				dizi[i][j] = rand() % 256;
			//	cout << dizi[i][j] << " ";
				
				
			}
			//cout << endl;
		}
	}
	
	else if (c=='e') {
		for (int i = 0; i < x; i++) {
			for (int j = 0; j < y; j++) {
				dizi[i][j] = 0;
				
				if (i == j) {
					dizi[i][j] = 1;
					
			   }
			//	cout << dizi[i][j] << " ";
			}
			//cout << "\n";
		}


	}
	else{
		for (int i = 0; i < x; i++) {
			for (int j = 0; j < y; j++) {
				dizi[i][j] = c;
			//	cout << dizi[i][j] << " ";
				
				
			}
		//	cout << endl;
		}
	}
 }
template<typename enes>  
void matris<enes>::EkranaYaz() {
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			cout << dizi[i][j] << " ";
		}
		cout << endl;
	}
}
template<typename enes>
void matris<enes>::DosyaYaz(string a) {
	ofstream dosya1(a);
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			dosya1 << dizi[i][j];
		}
		dosya1 << "\n";
	}
}
template<typename enes>
void matris<enes>::tranpoze() {
	cout << "Matris Normal Hali" << endl;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			cout << dizi[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	/*int tutucu1 = 0;
	int tutucu2 = 0;*/
	/*tutucu1 = x;
	tutucu2 = y;*/
	cout << "Traspoze alinmis hali" << endl;
	for (int j = 0; j < y; j++) {
		for (int i = 0; i < x; i++) {
		//	cout << dizi[i][j] << " ";
		}
		cout << endl;
	}	
	resize(y, x);
	
}
template<typename enes>
void matris<enes>::emul(matris a) {
	int Xx=a.getX();
	int Yy=a.getY();
	char Younluk=a.get›ngilizceYogunluk();
	srand(time(0));
	//cout << a.›nglizceYogunluk;
	int** dizi2 = new enes* [Xx];
	

	
	for (int i = 0; i < Xx; i++) {
		dizi2[i] = new enes[Yy];
	
	}
	if (Younluk == 'r') {
		for (int i = 0; i < Xx; i++) {
			for (int j = 0; j < Yy; j++) {


				dizi2[i][j] = rand() % 256;
				//	cout << dizi2[i][j] << " ";


			}
			//cout << endl;
		}
	}

	else if (Younluk == 'e') {
		for (int i = 0; i < Xx; i++) {
			for (int j = 0; j < Yy; j++) {
				dizi2[i][j] = 0;

				if (i == j) {
					dizi2[i][j] = 1;

				}
				//	cout << dizi[i][j] << " ";
			}
			//cout << "\n";
		}


	}
	else {
		for (int i = 0; i < Xx; i++) {
			for (int j = 0; j < Yy; j++) {
				dizi2[i][j] = Younluk;
				//	cout << dizi[i][j] << " ";


			}
			//	cout << endl;
		}
	}
	if ((x == Xx)&&(y==Yy)) {
		for (int i = 0; i < Xx; i++) {

			for (int j = 0; j < Yy; j++) {
				dizi[i][j] = dizi[i][j] * dizi2[i][j];
				cout << dizi[i][j] << " ";
			}
			cout << endl;
		}
	}
   
}
template<typename enes>
void matris<enes>::MatrisTersi()  {
	int** dizi3 = new enes* [x];
	for (int i = 0; i < x; i++) {
		dizi3[i] = new enes[y];
	}
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			if (j == i) {
				dizi3[i][j] = 1;
			 }
			else {
				dizi3[i][j] = 0;
			}
		}
	}
	int d, k;
	for (int i = 0; i < x; i++) {
		d = dizi[i][i];
		for (int j = 0; j < y; j++) {
			dizi[i][j] = dizi[i][j] / d;
			dizi3[i][j] = dizi3[i][j] / d;
		}
		for (int c = 0; c < x; c++) {
			if (x != i) {
				k = dizi[c][i];
				for (int d = 0; d < y; d++) {
					dizi[c][d] = dizi[c][d] - (dizi[i][d] * k);
					dizi3[c][d] = dizi3[c][d] - (dizi3[i][d] * k);

					
				}
			}
		}
	}
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			cout << dizi[i][j] << " ";
		}
		cout << endl;
	}
}
template<typename enes>
void matris<enes>::resize(enes a,enes b) {
	dizi = new enes* [a];
	for (int i = 0; i < a; i++) {
		dizi[i] = new enes[b];
	}
	setX(a);
	setY(b);
	char c = ›nglizceYogunluk;
	if (c == 'r') {

		for (int i = 0; i < a; i++) {
			for (int j = 0; j < b; j++) {


				dizi[i][j] = rand() % 256;
					cout << dizi[i][j] << " ";


			}
			cout << endl;
		}
	}

	else if (c == 'e') {
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < b; j++) {
				dizi[i][j] = 0;

				if (i == j) {
					dizi[i][j] = 1;

				}
					cout << dizi[i][j] << " ";
			}
			cout << "\n";
		}


	}
	else {
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < b; j++) {
				dizi[i][j] = c;
					cout << dizi[i][j] << " ";


			}
				cout << endl;
		}
	}
}
template<typename enes>
void matris<enes>::detarminant() {
	int* det;
	det = new enes[x * y];
	if (x == y) {
		if (x == 1) {
			int sayac = 0;
			for (int i = 0; i < x; i++) {
				for (int j = 0; j < y; j++) {
					det[sayac] = dizi[i][j];
					sayac++;
				}
			}
			int detDeger;
			cout << det[0];
		}
		if (x == 2) {
			int sayac = 0;
			for (int i = 0; i < x; i++) {
				for (int j = 0; j < y; j++) {
					det[sayac] = dizi[i][j];
					sayac++;
				}
			}
			int detDeger;
			detDeger = (det[0] * det[3]) - (det[1] * det[2]);
			cout << detDeger;
		}
		else if (x == 3) {
			int sayac = 0;
			for (int i = 0; i < x; i++) {
				for (int j = 0; j < y; j++) {
					det[sayac] = dizi[i][j];
				}
			}
			int detDeger, detDeger1, detDeger2, detDeger3, detDeger4, detDeger5, detDeger6;
			detDeger1 = det[0] * det[4] * det[8];
			detDeger2 = det[3] * det[7] * det[2];
			detDeger3 = det[6] * det[2] * det[5];
			detDeger4 = det[2] * det[4] * det[6];
			detDeger5 = det[5] * det[7] * det[0];
			detDeger6 = det[8] * det[2] * det[3];
			detDeger = (detDeger1 + detDeger2 + detDeger3) - (detDeger4 + detDeger5 + detDeger6);
			cout << detDeger;

		}
	}
	else {
		cout << "det islemi edilemez";
	}
}
#endif // !1

