#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int ogrenciS = 0;
int akademisyenS = 0;
int randavuS = 0;

void randavuSayisiBul() {
	string a;
	ifstream dosya;
	dosya.open("randavu.txt");
	if (!dosya) {
		return;
	}
	else {

		while (!dosya.eof()) {
			dosya >> a;
			dosya >> a;
			dosya >> a;
			dosya >> a;
			dosya >> a;
			randavuS++;
		}

		dosya.close();
		randavuS--;

	}
}






void ogrenciSayisiBul() {
	string a;

	ifstream dosya;
	dosya.open("ogrenci.txt");
	while (!dosya.eof()) {


		dosya >> a;


		dosya >> a;
		dosya >> a;
		dosya >> a;
		dosya >> a;
		dosya >> a;
		dosya >> a;

		ogrenciS++;


	}
	dosya.close();
	ogrenciS--;
}
void akamisyenSayisiBul() {


	string a;
	ifstream dosya;
	dosya.open("akademisyen.txt");
	while (!dosya.eof()) {


		dosya >> a;
		dosya >> a;
		dosya >> a;
		dosya >> a;
		dosya >> a;
		dosya >> a;
		dosya >> a;


		akademisyenS++;
	}
	dosya.close();
	akademisyenS--;

}


class Sistem {
protected:
	int RandS;
	string tarih;
	string saatG;
	string saatC;
	string ad;
	string soyad;
	string ePosta;
	string telefon;

public:
	Sistem() {
		RandS = 0;
	}


};


class Akademisyen :public Sistem {
protected:
	string sicilNo;
	string anabilim;
	string unvan;
	string akaDosya;

public:
	Akademisyen() {

		akaDosya = "akademisyen.txt";
		ifstream dosya;
		dosya.open(akaDosya);

		for (int i = 0; i<akademisyenS; i++) {

			dosya >> academician[i].sicilNo;
			dosya >> academician[i].ad;
			dosya >> academician[i].soyad;
			dosya >> academician[i].anabilim;
			dosya >> academician[i].ePosta;
			dosya >> academician[i].telefon;
			dosya >> academician[i].unvan;


		}
		dosya.close();
	}
	void	akademisyenBas();
	void akademisyenEkle();
	void akademisyenSilme();
	void akademisyenSorgula();
	bool getAkademisyen(string);

}academician[50];




class Ogrenci :public Akademisyen {
protected:
	string numara;
	string bolum;
	string kayitYili;
	string ogrDosya;


public:
	Ogrenci() {

		ogrDosya = "ogrenci.txt";
		string oku;
		ifstream dosya;
		dosya.open(ogrDosya);

		for (int i = 0; i<ogrenciS; i++) {




			dosya >> student[i].numara;
			dosya >> student[i].ad;
			dosya >> student[i].soyad;
			dosya >> student[i].bolum;
			dosya >> student[i].kayitYili;
			dosya >> student[i].ePosta;
			dosya >> student[i].telefon;



		}
		dosya.close();
	}
	void ogrencibas();
	void ogrenciEkle();
	void ogreciSilme();
	void ogrenciSorgulama();
	bool getOgrenci(string);

} student[100];


class Randavu :public Ogrenci {
protected:
	string RanDosya;

public:
	Ogrenci Classrom;
	Akademisyen School;

	Randavu() {
		ifstream dosya;
		dosya.open("randavu.txt");
		RanDosya = "randavu.txt";
		for (int i = 0; i < randavuS; i++) {

			dosya >> randavu[i].numara;
			dosya >> randavu[i].sicilNo;
			dosya >> randavu[i].tarih;
			dosya >> randavu[i].saatG;
			dosya >> randavu[i].saatC;
		}



	}
	void OgrenciRandavuSorgulama();
	void akademisyenRandavuSorgula();
	void randavuAl();
	void randavuSil();
}randavu[100];


bool Ogrenci::getOgrenci(string isimO) {


	for (int i = 0; i < ogrenciS; i++) {

		if (student[i].numara == isimO) {

			return 1;
		}
	}
	return 0;


}




bool Akademisyen::getAkademisyen(string isimA) {

	for (int i = 0; i < akademisyenS; i++) {

		if (academician[i].sicilNo == isimA) {

			return 1;
		}

	}

	return 0;
}


void Randavu::OgrenciRandavuSorgulama() {


	string ogrenciR;
	int tutucu = 0;
	system("cls");
	cout << "randavusunu sorgulamak istediginiz ogrencinin numarasini girin: ";
	cin >> ogrenciR;


	for (int i = 0; i < randavuS; i++) {

		if (randavu[i].numara == ogrenciR) {

			cout << randavu[i].sicilNo << " ";
			cout << randavu[i].tarih << " ";
			cout << randavu[i].saatG << " ";
			cout << randavu[i].saatC << endl;
			tutucu = 1;

		}

	}

	if (tutucu == 0) {
		cout << "Girilen ogrencini randavusu yok.." << endl;

	}

	system("pause");
}







void Randavu::akademisyenRandavuSorgula() {
	string akademisyenR;
	int tutucu = 0;
	system("cls");
	cout << "randavusunu sorgulamak istediginiz akademisyenin sicil No girin: ";
	cin >> akademisyenR;


	for (int i = 0; i < randavuS; i++) {

		if (randavu[i].sicilNo == akademisyenR) {

			cout << randavu[i].numara << " ";
			cout << randavu[i].tarih << " ";
			cout << randavu[i].saatG << " ";
			cout << randavu[i].saatC << endl;
			tutucu = 1;

		}

	}

	if (tutucu == 0) {
		cout << "Girilen akademisyenin randavusu yok.." << endl;


	}

	system("pause");

}







void Randavu::randavuSil() {

	string isimA;
	string isimO;
	string tarih;
	string saatG;
	string saatC;
	int tutucu = 0;

	system("cls");
	cout << "randavuda silinecek  akademisyenin sicilNo girin: ";
	cin >> isimA;

	if (getAkademisyen(isimA)) {

		cout << "randavuda silinecek ogrenci numara girin: ";
		cin >> isimO;

		if (getOgrenci(isimO)) {

			cout << "tarihi girin: ";
			cin >> tarih;
			cout << "giris saati girin: ";
			cin >> saatG;

			for (int i = 0; i < randavuS; i++) {



				if (randavu[i].sicilNo == isimA && randavu[i].numara == isimO && randavu[i].tarih == tarih && randavu[i].saatG == saatG) {


					for (int j = i; j < randavuS; j++) {
						randavu[j] = randavu[j + 1];

					}

					randavuS--;
					tutucu = 1;
					break;

				}

			}
			if (tutucu == 0) {
				cout << "randavu sisteminde boyle bir randavu gozukmemektedir.." << endl;
				system("cls");
				return;
			}


			ofstream dosya;
			dosya.open(RanDosya);
			for (int i = 0; i < randavuS; i++) {

				dosya << randavu[i].numara << " ";
				dosya << randavu[i].sicilNo << " ";
				dosya << randavu[i].tarih << " ";
				dosya << randavu[i].saatG << " ";
				dosya << randavu[i].saatC << endl;
			}
			dosya.close();
			return;






		}
		else {

			cout << "boyle bir ogrenci yok.." << endl;
			system("pause");
		}



	}
	else {

		cout << "boyle bir akademisyen yok.." << endl;
		system("pause");
	}







}


void 	Randavu::randavuAl() {
	string isimA;
	string isimO;
	string tarih;
	string saatG;
	string saatC;

	system("cls");
	cout << "hangi akademisyenin sicilNo girin: ";
	cin >> isimA;

	if (getAkademisyen(isimA)) {

		cout << "hangi ogrenci numara girin: ";
		cin >> isimO;

		if (getOgrenci(isimO)) {

			cout << "tarihi girin: ";
			cin >> tarih;
			cout << "giris saati girin: ";
			cin >> saatG;
			cout << "cikis saatini girin: ";
			cin >> saatC;

			for (int i = 0; i < randavuS; i++) {

				if (randavu[i].sicilNo == isimA && randavu[i].tarih == tarih && randavu[i].saatG <= saatG && saatG < randavu[i].saatC) {
					cout << "o giris saatinde akademisyen dolu.." << endl;
					system("pause");
					return;
				}

				else if (randavu[i].numara == isimO && randavu[i].tarih == tarih && randavu[i].saatG <= saatG && saatG <randavu[i].saatC) {
					cout << "o saatte ogrenci dolu.." << endl;
					system("pause");
					return;

				}


			}
			randavu[randavuS].numara = isimO;
			randavu[randavuS].sicilNo = isimA;
			randavu[randavuS].tarih = tarih;
			randavu[randavuS].saatG = saatG;
			randavu[randavuS].saatC = saatC;
			randavuS++;


			ofstream dosya;
			dosya.open(RanDosya);
			for (int i = 0; i < randavuS; i++) {

				dosya << randavu[i].numara << " ";
				dosya << randavu[i].sicilNo << " ";
				dosya << randavu[i].tarih << " ";
				dosya << randavu[i].saatG << " ";
				dosya << randavu[i].saatC << endl;
			}
			dosya.close();
			return;






		}
		else {

			cout << "boyle bir ogrenci yok.." << endl;
			system("pause");
		}



	}
	else {

		cout << "boyle bir akademisyen yok.." << endl;
		system("pause");
	}





}





void Akademisyen::akademisyenBas() {

	cout << endl << endl;
	cout << "akademisyen ILGILI BILGILER:" << endl;
	for (int i = 0; i<akademisyenS; i++) {

		cout << "sicilNo: " << academician[i].sicilNo << "  ";
		cout << "ad: " << academician[i].ad << "  ";
		cout << "soyad: " << academician[i].soyad << "  ";
		cout << "anaBilimDali: " << academician[i].anabilim << "  ";
		cout << "ePosta: " << academician[i].ePosta << "  ";
		cout << "telefon: " << academician[i].telefon << "  ";
		cout << "unvan: " << academician[i].unvan << endl;


	}
	cout << endl;
	cout << "akademisyen sayisi: " << akademisyenS << endl;
	system("pause");
}





void Ogrenci::ogrencibas() {
	cout << endl << endl;
	cout << "OGRENCIYLE ILGILI BILGILER:" << endl;
	for (int i = 0; i<ogrenciS; i++) {

		cout << "numara: " << student[i].numara << "  ";
		cout << "ad: " << student[i].ad << "  ";
		cout << "soyad: " << student[i].soyad << "  ";
		cout << "kayitYili: " << student[i].kayitYili << "  ";
		cout << "ePosta: " << student[i].ePosta << "  ";
		cout << "telefon: " << student[i].telefon << endl;


	}
	cout << endl;
	cout << "ogrenci sayisi: " << ogrenciS << endl;
	system("pause");

}


void Akademisyen::akademisyenEkle() {

	system("cls");
	cout << "dosyaya eklemek icin asagidaki yerleri doldurun" << endl;


	cout << "sicilNo giriniz: ";
	cin >> academician[akademisyenS].sicilNo;

	cout << "ad giriniz: ";
	cin >> academician[akademisyenS].ad;


	cout << "soyad giriniz: ";
	cin >> academician[akademisyenS].soyad;


	cout << "anabilim giriniz: ";
	cin >> academician[akademisyenS].anabilim;


	cout << "ePosta giriniz: ";
	cin >> academician[akademisyenS].ePosta;


	cout << "telefon giriniz: ";
	cin >> academician[akademisyenS].telefon;


	cout << "unvan giriniz: ";
	cin >> academician[akademisyenS].unvan;

	akademisyenS++;

	ofstream dosya1;
	dosya1.open(akaDosya);
	for (int i = 0; i < akademisyenS; i++) {
		dosya1 << academician[i].sicilNo << " ";
		dosya1 << academician[i].ad << " ";
		dosya1 << academician[i].soyad << " ";
		dosya1 << academician[i].anabilim << " ";
		dosya1 << academician[i].ePosta << " ";
		dosya1 << academician[i].telefon << " ";
		dosya1 << academician[i].unvan;
		dosya1 << endl;

	}
	dosya1.close();

}






void Ogrenci::ogrenciEkle() {
	system("cls");
	cout << "dosyaya eklemek icin asagidaki yerleri doldurun" << endl;

	cout << "numarayi giriniz: ";
	cin >> student[ogrenciS].numara;

	cout << "ad giriniz: ";
	cin >> student[ogrenciS].ad;

	cout << "soyad giriniz: ";
	cin >> student[ogrenciS].soyad;

	cout << "bolum giriniz: ";
	cin >> student[ogrenciS].bolum;


	cout << "kayit Yili giriniz: ";
	cin >> student[ogrenciS].kayitYili;

	cout << "e Posta giriniz: ";
	cin >> student[ogrenciS].ePosta;

	cout << "telefon giriniz: ";
	cin >> student[ogrenciS].telefon;

	ogrenciS++;

	ofstream dosya1;
	dosya1.open(ogrDosya);
	for (int i = 0; i < ogrenciS; i++) {
		dosya1 << student[i].numara << " ";
		dosya1 << student[i].ad << " ";
		dosya1 << student[i].soyad << " ";
		dosya1 << student[i].bolum << " ";
		dosya1 << student[i].kayitYili << " ";
		dosya1 << student[i].ePosta << " ";
		dosya1 << student[i].telefon;
		dosya1 << endl;

	}
	dosya1.close();

}


void Akademisyen::akademisyenSilme() {

	int tutucu = 1;
	string sayi;
	system("cls");
	cout << "silmek istdegininz akademisyenin SicilNo girin: ";
	cin >> sayi;

	for (int i = 0; i < akademisyenS; i++) {

		if (academician[i].sicilNo == sayi) {

			for (int j = i; j < akademisyenS; j++) {

				academician[j] = academician[j + 1];


			}
			akademisyenS--;
			tutucu = 0;
			break;
		}

	}
	if (tutucu == 1) {

		cout << "silinecek akademisyen dosyada bulunmamaktadir" << endl;
	}

	ofstream dosya1;
	dosya1.open(akaDosya);
	for (int i = 0; i < akademisyenS; i++) {
		dosya1 << academician[i].sicilNo << " ";
		dosya1 << academician[i].ad << " ";
		dosya1 << academician[i].soyad << " ";
		dosya1 << academician[i].anabilim << " ";
		dosya1 << academician[i].ePosta << " ";
		dosya1 << academician[i].telefon << " ";
		dosya1 << academician[i].unvan;
		dosya1 << endl;

	}
	dosya1.close();

	system("pause");

}




void Ogrenci::ogreciSilme() {
	int tutucu = 1;
	string sayi;
	system("cls");
	cout << "silmek istdegininz ogrencinin numarasini girin: ";
	cin >> sayi;

	for (int i = 0; i < ogrenciS; i++) {

		if (student[i].numara == sayi) {

			for (int j = i; j < ogrenciS; j++) {

				student[j] = student[j + 1];

			}
			ogrenciS--;
			tutucu = 0;
			break;
		}

	}
	if (tutucu == 1) {

		cout << "silinecek ogrenci dosyada bulunmamaktadir" << endl;
	}

	ofstream dosya1;
	dosya1.open(ogrDosya);
	for (int i = 0; i < ogrenciS; i++) {
		dosya1 << student[i].numara << " ";
		dosya1 << student[i].ad << " ";
		dosya1 << student[i].soyad << " ";
		dosya1 << student[i].bolum << " ";
		dosya1 << student[i].kayitYili << " ";
		dosya1 << student[i].ePosta << " ";
		dosya1 << student[i].telefon;
		dosya1 << endl;

	}
	dosya1.close();

	system("pause");


}

void Akademisyen::akademisyenSorgula() {

	int tutucu = 1;
	string sayi;
	system("cls");
	cout << "sorgulama istedigin akademisyenin SicilNo girinz: ";
	cin >> sayi;

	for (int i = 0; i < akademisyenS; i++) {

		if (academician[i].sicilNo == sayi) {
			cout << "SicilNo girdiginiz akademisyenin bilgileri..." << endl;
			cout << "--------------------------------------" << endl;
			cout << "sicilNo:" << academician[i].sicilNo << endl;
			cout << "ad: " << academician[i].ad << endl;
			cout << "soyad: " << academician[i].soyad << endl;
			cout << "anaBilim: " << academician[i].anabilim << endl;
			cout << "e Posta: " << academician[i].ePosta << endl;
			cout << "telefon: " << academician[i].telefon << endl;
			cout << "unvan: " << academician[i].unvan << endl;
			tutucu = 0;
			break;
		}


	}
	if (tutucu == 1) {
		cout << "SicilNo'dan aradigin akademisyen dosyada bulunmamaktadir" << endl;
	}
	system("pause");



}


void Ogrenci::ogrenciSorgulama() {
	int tutucu = 1;
	string sayi;
	system("cls");
	cout << "sorgulama istedigin ogrencinin numarasini girinz: ";
	cin >> sayi;

	for (int i = 0; i < ogrenciS; i++) {

		if (student[i].numara == sayi) {
			cout << "numarasini girdiginiz ogrencinin bilgileri..." << endl;
			cout << "--------------------------------------" << endl;
			cout << "numara:" << student[i].numara << endl;
			cout << "ad: " << student[i].ad << endl;
			cout << "soyad: " << student[i].soyad << endl;
			cout << "bolum: " << student[i].bolum << endl;
			cout << "kayit yili: " << student[i].kayitYili << endl;
			cout << "e Posta: " << student[i].ePosta << endl;
			cout << "telefon: " << student[i].telefon << endl;
			tutucu = 0;
			break;
		}


	}
	if (tutucu == 1) {
		cout << "numarasindan  aradigin ogrenci dosyada bulunmamaktadir" << endl;
	}
	system("pause");


}





class Arayuz :Randavu {
public:

	void ogrenciArayuz();
	void akademisyenArayuz();
	void randavuArayuz();




	Arayuz() {


		char sayi;

		while (1) {
			system("cls");
			cout << "\t\t\tARAYUZ" << endl << endl;
			cout << "\t\t[1] Ogrenci verileri.." << endl;
			cout << "\t\t[2] Akademisyen verileri.." << endl;
			cout << "\t\t[3] Randevu islemleri..." << endl;
			cout << "\t\t[4] Sistemi sonlandirma.." << endl;
			cout << endl << "\tseciminizi giriniz: ";
			cin >> sayi;

			switch (sayi) {

			case '1':
				ogrenciArayuz();
				break;

			case '2':
				akademisyenArayuz();
				break;

			case '3':

				randavuArayuz();
				break;

			case '4':
				exit(1);
				break;

			default:
				cout << endl;
				cout << "YANLIS SAYI DEGERININ GIRDINIZ.." << endl;
				system("pause");
				break;
			}

		}


	}

};

void Arayuz::randavuArayuz() {

	char sayi;
	system("cls");
	cout << "\t\t\tRANDAVU ARAYUZU" << endl;
	cout << "\t\t[1] Randavu Ekle" << endl;
	cout << "\t\t[2] Randavu Sil" << endl;
	cout << "\t\t[3] Ogrenci Randavu Sorgulama" << endl;
	cout << "\t\t[4] Akademisyen Randavu Sorgulama" << endl;
	cout << "\t\t[5] Geri" << endl;
	cout << endl;
	cout << "seciminizi girin: ";
	cin >> sayi;

	switch (sayi) {

	case '1':
		randavuAl();
		break;

	case '2':
		randavuSil();
		break;

	case '3':
		OgrenciRandavuSorgulama();
		break;

	case '4':
		akademisyenRandavuSorgula();
		break;
	case '5':
		break;

	default:
		cout << "yanlis giris.." << endl;
		system("pause");
		break;
	}



}




void Arayuz::akademisyenArayuz() {

	char sayi;

	system("cls");
	cout << "\t\t\tAKADENISYEN ARAYUZU" << endl;
	cout << "\t\t[1] Akademisyen Bilgileri.." << endl;
	cout << "\t\t[2] Akademisyen Ekleme.." << endl;
	cout << "\t\t[3] Akademisyen Silme.." << endl;
	cout << "\t\t[4] SicilNo Akademisyen Sorgulama.." << endl;
	cout << "\t\t[5] Geri.." << endl;
	cout << endl;
	cout << "seciminizi girin: ";
	cin >> sayi;

	switch (sayi) {

	case '1':
		School.akademisyenBas();
		break;
	case '2':
		School.akademisyenEkle();
		break;

	case '3':
		School.akademisyenSilme();
		break;
	case '4':
		School.akademisyenSorgula();
		break;
	case '5':
		break;


	default:
		cout << "yanlis giris.." << endl;
		system("pause");
		break;
	}

}



void Arayuz::ogrenciArayuz() {

	char sayi;

	system("cls");
	cout << "\t\t\tOGRENCI ARAYUZ" << endl;
	cout << "\t\t[1] Ogrenci Bilgileri.." << endl;
	cout << "\t\t[2] Ogrenci Ekleme.." << endl;
	cout << "\t\t[3] Ogrenci Silme.." << endl;
	cout << "\t\t[4] Numaradan Ogrenci Sorgulama.." << endl;
	cout << "\t\t[5] Geri.." << endl;
	cout << endl;
	cout << "seciminizi girin: ";
	cin >> sayi;
	switch (sayi) {

	case '1':
		Classrom.ogrencibas();
		break;

	case '2':
		Classrom.ogrenciEkle();
		break;

	case '3':
		Classrom.ogreciSilme();
		break;

	case '4':
		Classrom.ogrenciSorgulama();
		break;
	case '5':
		break;


	default:
		cout << "yanlis giris.." << endl;
		system("pause");
		break;
	}

}


int main()
{
	//ilk basta dosyada ogrenci.txt ve akademisyen.txt olmasi gerekir..cunku direk okuma yapar.

	randavuSayisiBul();
	ogrenciSayisiBul();
	akamisyenSayisiBul();
	Arayuz arayuz;





	system("pause");
	return 0;
}

