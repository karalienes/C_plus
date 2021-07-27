
#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include<cstring>
using namespace std;

void insan_bilgi();
void bilgi_insan();


void basla() {
	system("cls");
	int islem;
	cout << "\t\t\tTAHMIN YARISMASI" << endl << endl;
	cout << "\t\t1.INSAN-BILGISAYAR" << endl;
	cout << "\t\t2.BILGISAYAR-INSAN" << endl;
	cout << "islem seciniz: ";
	cin >> islem;

	switch (islem) {
	case 1:
		insan_bilgi();
		break;
	case 2:

		bilgi_insan();
		break;


	default:
		basla();
		break;
	}



}

void bilgi_insan() {


	system("cls");


	ifstream dosya;
	dosya.open("/home/masumpanda/CLionProjects/untitled8/sözlük.txt"); //asil sözlügümün adi
	int sayac = 0;
	int ilkdosya = 0;
	string a;
	for (int i = 0; !dosya.eof(); i++) {
		 getline(dosya,a);
		sayac++;
		ilkdosya++;
	}

	dosya.close();
	cout << ilkdosya << ".kelime var..." << endl;
	string  *sayi = new string[sayac + 100];//ekleme yapabilmek icin ekstra 100 yer ayrildi..
	string *olusum = new string[sayac];
	string *tercihler = new string[30];
	int tercihS = 0;
	string OnceTercih;
	int kayitSayi = sayac + 100;
	dosya.open("/home/masumpanda/CLionProjects/untitled8/sözlük.txt"); //asil sözlügümün adi
	for (int i = 0; i < sayac; i++) {

		getline(dosya, sayi[i]);

	}

	dosya.close();



	srand(time(NULL));
	int degisken = rand() % sayac;
	string tercih = sayi[degisken];
	tercihler[tercihS] = tercih;
	tercihS++;
	string saklanan;
	string sakalananKopya;
	cout << "saklanani girin: ";
	getline(cin, saklanan);//getline calişmasi  için 2 tane koydum.
	getline(cin, saklanan);
	cout << endl;

	int size = saklanan.length();
	char *OlanKelimeler = new char[size];
	int *OlanKelimeAdedi = new int[size];
	char *YerindeOlan = new char[size];
	int *yerineOlanindis = new int[size];

	for (int i = 0; i < saklanan.length(); i++) {
		OlanKelimeler[i] = '\0';

		YerindeOlan[i] = '\0';
	}
	int kontrol3 = 1;
	int sayac2 = 0, sayac3 = 0;
	int sayac6 = 0;
	int OlanKSayaci = 0;
	int KelimeK = 0;
	int yerASayaci = 0;
	int tekKullanim = 0;
	int sayac5;
	int toplam = 0;
	int sayac7 = 0;
	int tut;
	int sayac8 = 0;
	int sayac9 = 0;
	int NormalS = 0;
	int KartezyenS = 0;
	while (1) {


		toplam = 0;

		for (int i = 0; i < OlanKSayaci; i++) {
			toplam += OlanKelimeAdedi[i];
		}
		if (toplam == saklanan.length() && sayac7 == 0) {
			cout << "saklanan kelimenin butun harflerini buldun.." << endl;
			sayac7 = 1;
		}


		if (tekKullanim == 1) {

			if (sayac8 == 0) {
				kontrol3 = 1;
				ifstream file;
				file.open("sözlük2.txt"); // yedek sözlügüm
				for (int i = 0; !file.eof(); i++) {
					getline(file, a);
					if (a == saklanan) {
						kontrol3 = 0;
					}



				}
				sayac8 = 1;
			}

			if (kontrol3 == 1 || tut == 0) {
				cout << saklanan << " kelimesi sozlukte yok" << endl;

				sayi[sayac - 1] = saklanan;
				sayac = sayac + 1;
				ofstream dosya;
				dosya.open("/home/masumpanda/CLionProjects/untitled8/sözlük.txt"); //asil sözlügümün adi
				for (int i = 0; i < sayac; i++) {
					dosya << sayi[i] << "\n";
				}
				dosya.close();

				system("pause");
				basla();


			}


			degisken = rand() % tut;
			tercih = olusum[degisken];


			while (1) {
				sayac9 = 0;
				for (int i = 0; i < tercihS; i++) {
					if (tercih == tercihler[i]) {
						sayac9 = 1;
					}
				}
				if (sayac9 == 1) {
					degisken = rand() % tut;
					tercih = olusum[degisken];
				}
				else {
					tercihler[tercihS] = tercih;
					tercihS++;
					break;
				}



			}

		}
		cout << "tercih: " << tercih << endl;
		OnceTercih = tercih;


		if (saklanan == tercih) {
			cout << "ARANAN KELIMEBULUNDU: " << saklanan << endl;
			system("pause");
			basla();

		}

		for (int i = 0; i < tercih.length(); i++) {
			sayac6 = 0;
			KelimeK = 0;
			sayac2 = 0;
			sayac3 = 0;
			sayac5 = 0;
			sayac9 = 0;

			for (int j = 0; j < saklanan.length(); j++) {



				if (tercih[i] == saklanan[j]) {
					KelimeK++;
					KartezyenS++;
					sayac6 = 1;
					if (i == j) {


						for (int k = 0; YerindeOlan[k] != '\0'; k++) {
							if (tercih[i] == YerindeOlan[k] && i == yerineOlanindis[k]) {
								sayac5 = 1;
							}
						}
						if (sayac5 == 0) {
							YerindeOlan[yerASayaci] = tercih[i];
							yerineOlanindis[yerASayaci] = i;
							yerASayaci++;

						}



					}


					for (int k = 0; OlanKelimeler[k] != '\0'; k++) {
						if (tercih[i] == OlanKelimeler[k]) {
							sayac3 = 1;
						}
					}

					if (sayac3 == 1) {
						continue;
					}

				}

			}
			if (sayac3 == 0 && sayac6 == 1) {
				OlanKelimeler[OlanKSayaci] = tercih[i];
				OlanKelimeAdedi[OlanKSayaci] = KelimeK;
				NormalS += KelimeK;
				OlanKSayaci++;

			}
		}

		for (int i = 0; i < OlanKSayaci; i++) {
			cout << OlanKelimeler[i] << "-adedi ---> " << OlanKelimeAdedi[i] << "  ";
		}
		cout << endl;
		for (int i = 0; i < yerASayaci; i++) {
			cout << YerindeOlan[i] << " -indis ---> " << yerineOlanindis[i] << " ";

		}

		cout << endl << endl;
		cout << "Normal: " << NormalS << "   KartezyenS: " << KartezyenS << endl;
		KartezyenS=0;

		if (OlanKSayaci == 0 && yerASayaci == 0) {
			cout << "ESLESEN HARF BULUNAMADI" << endl;
		}

		cout << endl;

		tut = 0;

		ifstream file;
		file.open("sözlük2.txt");//yedek sözlügümün adi
		if (tekKullanim == 0) {

			dosya.open("/home/masumpanda/CLionProjects/untitled8/sözlük.txt"); //asil sözlügümün adi
		}
		bool kontrol = true;
		bool kontrol2 = true;
		int sayac4 = 0;

		for (int i = 0; i < sayac; i++) {



			if (tekKullanim == 0) {
				getline(dosya, a);

			}
			else {
				getline(file, a);
			}

			if (file.eof()) {

				break;
			}


			kontrol = true;
			kontrol2 = true;
			if (sayac7 == 1) {
				if (a.length() != toplam) {
					kontrol = false;
					kontrol2 = false;
				}
			}


			for (int j = 0; j < yerASayaci; j++) {

				if (yerineOlanindis[j] <= a.length()) {

					if (YerindeOlan[j] == a[yerineOlanindis[j]] && kontrol == true) {
						kontrol = true;
					}
					else {
						kontrol = false;
					}
				}
				else {
					kontrol = false;

				}
			}
			if (kontrol == true) {

				for (int k = 0; k < OlanKSayaci; k++) {
					sayac4 = 0;
					for (int t = 0; t < a.length(); t++) {
						if (OlanKelimeler[k] == a[t]) {
							sayac4++;
						}

					}
					if (sayac4 == OlanKelimeAdedi[k] && kontrol2 == true) {
						kontrol2 = true;
					}
					else {
						kontrol2 = false;
					}


				}




			}
			if (kontrol == true && kontrol2 == true && tut < sayac) {

				olusum[tut] = a;
				tut++;


			}


		}

		file.close();
		ofstream oku;
		oku.open("sözlük2.txt");//yedek sözlügümün adi
		int sondosya = 0;
		for (int z = 0; z < tut; z++) {

			oku << olusum[z];
			oku << "\n";
			sondosya++;

		}
		oku.close();

		cout << sondosya << ".kelime kaldi..." << endl;
		tekKullanim = 1;

	}

}



void insan_bilgi() {
	system("cls");
	ifstream dosya;
	dosya.open("/home/masumpanda/CLionProjects/untitled8/sözlük.txt"); //asil sözlügümün adi
	int sayac = 0;
	int ilkdosya = 0;
	string a;
	for (int i = 0; !dosya.eof(); i++) {
		getline(dosya, a);
		sayac++;
		ilkdosya++;
	}


	dosya.close();
	cout << ilkdosya << ".kelime var..." << endl;
	string  *sayi = new string[sayac];
	string *olusum = new string[sayac];
	dosya.open("sözlük.txt"); //asil sözlügümün adi
	for (int i = 0; i < sayac; i++) {

		getline(dosya, sayi[i]);
	}
	dosya.close();
	srand(time(NULL));
	int degisken = rand() % sayac;
	string saklanan = sayi[degisken];
	string tercih;
	int size = saklanan.length();
	char *OlanKelimeler = new char[size];
	int *OlanKelimeAdedi = new int[size];
	char *YerindeOlan = new char[size];
	int *yerineOlanindis = new int[size];

	for (int i = 0; i < saklanan.length(); i++) {
		OlanKelimeler[i] = '\0';

		YerindeOlan[i] = '\0';
	}
	int BirSefer = 0;
	int sayac2 = 0, sayac3 = 0;
	int sayac6 = 0;
	int OlanKSayaci = 0;
	int KelimeK = 0;
	int yerASayaci = 0;
	int tekKullanim = 0;
	int sayac5;
	int toplam = 0;
	int NormalS = 0;
	int KartezyenS = 0;

	while (1) {

		toplam = 0;

		for (int i = 0; i < OlanKSayaci; i++) {
			toplam += OlanKelimeAdedi[i];
		}
		if (toplam == saklanan.length()) {
			cout << "saklanan kelimenin butun harflerini buldun.." << endl;
		}

		cout << " tercihi girin: ";
		if (BirSefer == 0) {

        getline(cin, tercih);//getline okusunun diye.

		BirSefer = 1;
		}
		getline(cin, tercih);

		if (saklanan == tercih) {
			cout << "ARANAN KELIMEBULUNDU: " << saklanan << endl;
			system("pause");
			basla();
			break;
		}





		for (int i = 0; i < tercih.length(); i++) {
			sayac6 = 0;
			KelimeK = 0;
			sayac2 = 0;
			sayac3 = 0;
			sayac5 = 0;


			for (int j = 0; j < saklanan.length(); j++) {



				if (tercih[i] == saklanan[j]) {
					KartezyenS++;
					KelimeK++;
					sayac6 = 1;
					if (i == j) {


						for (int k = 0; YerindeOlan[k] != '\0'; k++) {
							if (tercih[i] == YerindeOlan[k] && i == yerineOlanindis[k]) {
								sayac5 = 1;
							}
						}
						if (sayac5 == 0) {
							YerindeOlan[yerASayaci] = tercih[i];
							yerineOlanindis[yerASayaci] = i;
							yerASayaci++;

						}



					}


					for (int k = 0; OlanKelimeler[k] != '\0'; k++) {
						if (tercih[i] == OlanKelimeler[k]) {
							sayac3 = 1;
						}
					}

					if (sayac3 == 1) {
						continue;
					}



				}

			}
			if (sayac3 == 0 && sayac6 == 1) {
				OlanKelimeler[OlanKSayaci] = tercih[i];
				OlanKelimeAdedi[OlanKSayaci] = KelimeK;
				NormalS += KelimeK;
				OlanKSayaci++;

			}




		}


		for (int i = 0; i < OlanKSayaci; i++) {
			cout << OlanKelimeler[i] << "-adedi ---> " << OlanKelimeAdedi[i] << "  ";
		}
		cout << endl;
		for (int i = 0; i < yerASayaci; i++) {
			cout << YerindeOlan[i] << " -indis ---> " << yerineOlanindis[i] << " ";

		}
		cout << endl;
		cout << "Normal: " << NormalS << "   KartezyenS: " << KartezyenS << endl;
		cout << endl;
		KartezyenS = 0;
		if (OlanKSayaci == 0 && yerASayaci == 0) {
			cout << "ESLESEN HARF BULUNAMADI" << endl;
		}

		cout << endl;

		int tut = 0;

		ifstream file;
		file.open("sözlük2.txt"); //yedek sözlügün adi
		if (tekKullanim == 0) {

			dosya.open("/home/masumpanda/CLionProjects/untitled8/sözlük.txt"); //asil sözlügümün adi
		}
		bool kontrol = true;
		bool kontrol2 = true;
		int sayac4 = 0;

		for (int i = 0; i < sayac; i++) {



			if (tekKullanim == 0) {
				getline(dosya,a);

			}
			else {
				getline(file,a);
			}

			if (file.eof()) {

				break;
			}


			kontrol = true;
			kontrol2 = true;
			for (int j = 0; j < yerASayaci; j++) {

				if (yerineOlanindis[j] <= a.length()) {

					if (YerindeOlan[j] == a[yerineOlanindis[j]] && kontrol == true) {
						kontrol = true;
					}
					else {
						kontrol = false;
					}
				}
				else {
					kontrol = false;

				}
			}
			if (kontrol == true) {

				for (int k = 0; k < OlanKSayaci; k++) {
					sayac4 = 0;
					for (int t = 0; t < a.length(); t++) {
						if (OlanKelimeler[k] == a[t]) {
							sayac4++;
						}

					}
					if (sayac4 == OlanKelimeAdedi[k] && kontrol2 == true) {
						kontrol2 = true;
					}
					else {
						kontrol2 = false;
					}


				}




			}
			if (kontrol == true && kontrol2 == true && tut < sayac) {

				olusum[tut] = a;
				tut++;


			}


		}

		file.close();
		ofstream oku;
		oku.open("sözlük2.txt"); // yedek sözlügün adi
		int sondosya = 0;
		for (int z = 0; z < tut; z++) {

			oku << olusum[z];
			oku << "\n";
			sondosya++;
		}
		oku.close();
		cout << sondosya << ".kelime kaldi..." << endl;

		tekKullanim = 1;
	}

	dosya.close();

	cout << endl;

}






int main()
{
	basla();
	cout << endl;

	system("pause");
	return 0;
}
