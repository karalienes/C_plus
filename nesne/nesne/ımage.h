#pragma once
#ifndef IMAGE_H
#define IMEGE_h
#include"matris.h"
#include<string>
#include<iostream>
#include<sstream>
#include<fstream>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <array>
#include <vector>
#include <iterator>
#include <cstring>
using namespace std;
template<class enes>
class ýmage : public matris<enes> {
public:

	struct RGB {
		RGB() : R(0), G(0), B(0) {};
		unsigned char R;
		unsigned char G;
		unsigned char B;

	};

	ýmage();
	ýmage(enes, enes);
	ýmage(string, string);
	void setN(enes a) {
		n = a;
	};
	void setM(enes b) {
		m = b;
	};
	enes getN() {
		return n;
	}
	enes getM() {
		return m;
	}
	void setÝsim(string a) {
		isim = a;
	}
	void setFormat(string b) {
		format = b;
	}
	string getÝsim() {
		return isim;
	}
	string getFormat() {
		return format;
	}
	void GörüntüAl();
	void imread(string , string );
	void imWrite(string, string);
	void color2Gray();
	void gray2Binary(enes);
	void erosion();
	void dilation();
	void opening();
	void closing();
protected:
	int** matris;
	char* arr2;
	int* dizi;
	int** dizi2;
	int n;
	vector<char> img;
	int m;
	string isim;
	string format;
	int width;
	int height;
	int** morfolojik;
	
};
template<typename enes>
ýmage<enes>::ýmage() {
	setM(255);
	setN(255);
	
	matris = new enes* [n];
	for (int i = 0; i < m; i++) {
		matris[i] = new enes[m];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			matris[i][j] = 0;
		}
	}
}
template<typename enes>
ýmage<enes>::ýmage(enes a, enes b) {
	setN(a);
	setM(b);
	matris = new enes* [n];
	for (int i = 0; i < m; i++) {
		matris[i] = new enes[m];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			matris[i][j] = 0;
			cout << matris[i][j] << endl;
		}
	}

}
template<typename enes>
ýmage<enes>::ýmage(string a, string b) {
	string isim = a + "." + b;
	setÝsim(a);
	setFormat(b);
//	ifstream dosya1(isim, ios::binary);
//	char* arr;
	if (b == "bin") {
		char* arr;
		arr = new char[2];
		ifstream dosya1(isim, ios::binary);
		dosya1.read(arr, 2);

		n = int((arr[0] + 256) % 256);
		m = int((arr[1] + 256) % 256);
		//cout<< int((arr[2] + 256) % 256);
		int imgSize = n * m;

		//cout << imgSize;
		dosya1.seekg(2, ios::beg);
		arr2 = new char[imgSize];

		dosya1.read(arr2, imgSize);
		int size = 0;


		//cout << "*" << size << "*" << endl;
		matris = new enes* [n];
		for (int i = 0; i < n; i++) {
			matris[i] = new enes[m];

		}
		cout << endl;

		int sayac = 0;
		int k = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				matris[i][j] = int((arr2[k] + 256) % 256);
			//	cout << matris[i][j];
				k++;
				sayac++;
			}
		}
		cout << sayac;

	}
	else if (b == "bmp") {
		static constexpr size_t Header_sýze = 54;
		ifstream dosya1(isim, ios::binary);
		array<char, Header_sýze>header;
		dosya1.read(header.data(), header.size());

		auto fileSize = *reinterpret_cast<uint32_t*>(&header[2]);
		auto dataOffset = *reinterpret_cast<uint32_t*>(&header[10]);
		 width = *reinterpret_cast<uint32_t*>(&header[18]);
		 height = *reinterpret_cast<uint32_t*>(&header[22]);
		auto depth = *reinterpret_cast<uint16_t*>(&header[28]);
		cout << "fileSize: " << fileSize << endl;
		cout << "dataOffset: " << dataOffset << endl;
		cout << "width: " << width << endl;
		cout << "height: " << height << endl;
		cout << "depth: " << depth << "-bit" << endl;
		//dizi = new int[dataOffset - Header_sýze];

		/*vector<char> img(dataOffset - Header_sýze);
		dosya1.read(img.data(), img.size());*/

		auto dataSize = ((width * 3 + 3) & (~3)) * height;
		//img.resize(dataSize);

		arr2= new  char[dataSize];
		dosya1.read(arr2,(dataSize));
		//dosya1.read(img.data(), img.size());

		/*int *a = &img.size;
		dizi = new int[*a];
		for (int i = 0; i < img.size(); i++) {
			dizi[i] = img[i];
		}*/
		setM(dataSize);
		char temp = 0;
		int tutucu = 0;
		for (int i = dataSize - 4; i >= 0; i -= 3)
		{
			temp = arr2[i];
			arr2[i] = arr2[i + 2];
			arr2[i + 2] = temp;

		//cout << "R: " << int(arr2[i] & 0xff) << " G: " << int(arr2[i + 1] & 0xff) << " B: " << int(arr2[i + 2] & 0xff) << endl;
			tutucu++;
		}
	//	cout << tutucu;
	}
	else {
		exit(1);
	}
	
}
template<typename enes>
void ýmage<enes>::GörüntüAl() {
	/*ifstream dosya1("image1.bin", ios::binary);
	ofstream dosya2("resim.txt");
	char* arr;
	arr = new char[2];

	dosya1.read(arr, 2);

	int n = int((arr[0] + 256) % 256);
	int m = int((arr[1] + 256) % 256);
	int imgSize = n * m;
	delete arr;
	int arr3;
	cout << imgSize;
	dosya1.seekg(2, ios::beg);
	int *arr3 = new int[imgSize];

	dosya1.read(arr, imgSize);
	
	for (int i = 0; i < m; i++) {
		arr3[i] = new int[n];
	}
	int k = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr2[n][m] = arr[m + k + n];
			if ((m - 1) == j) {
				k = k + 256;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr2[i][j];
			if (arr2[i][j] > 150) {
				dosya2 << "*";
			}
			else {
				dosya2 << " ";
			}
		}
	}
	int size = 0;


	cout << "*" << size << "*" << endl;
	int** matris = new int* [n];
	for (int i = 0; i < n; i++) {
		matris[i] = new int[m];
	}
	cout << endl;
	int k = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			matris[i][j] = int((arr[k] + 256) % 256);
			cout << matris[i][j] << endl;
			if (matris[i][j] > 150) {
				dosya2 << "*";
			}
			else {
				dosya2 << " ";
				k++;
			}
			cout << endl;
		}
	}*/
	ifstream dosya1("image1.bin", ios::binary);
	ofstream dosya2("resim.txt");
	char* arr;
	arr = new char[2];

	dosya1.read(arr, 2);
	
	int n = int((arr[0] + 256) % 256);
	int m = int((arr[1] + 256) % 256);
	int imgSize = n * m;
	
	cout << imgSize;
	dosya1.seekg(2, ios::beg);
	arr2 = new char[imgSize];

	dosya1.read(arr2, imgSize);
	int size = 0;


	cout << "*" << size << "*" << endl;
	 matris = new enes* [n];
	for (int i = 0; i < n; i++) {
		matris[i] = new enes[m];
	}
	cout << endl;
	int k = 0;
	int sayac = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			matris[i][j] = int((arr2[k] + 256) % 256);
			cout << matris[i][j] << endl;
			if (matris[i][j] > 120) {
				dosya2 << "*";
				k++;
				sayac++;
			}
			else {
				dosya2 << " ";
				k++;
				sayac++;
		}
			cout << endl;
		}
	}
	cout << sayac;
}
template<typename enes>
void ýmage<enes>::imread(string a, string b) {
//	ifstream dosya1(a+"."+b, ios::binary);
//	//char* arr;
//	arr = new char[2];
//
//	dosya1.read(arr, 2);
//
//	 n = int((arr[0] + 256) % 256);
//	 m = int((arr[1] + 256) % 256);
//	int imgSize = n * m;
//	delete arr;
//	cout << imgSize;
//	dosya1.seekg(2, ios::beg);
//	arr = new char[imgSize];
//
//	dosya1.read(arr, imgSize);
//	int size = 0;
//
//
//	cout << "*" << size << "*" << endl;
//	int** matris = new int* [n];
//	for (int i = 0; i < n; i++) {
//		matris[i] = new int[m];
//	}
//	cout << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << matris[i][j] << endl;
		}
	}
}
template<typename enes>
void ýmage<enes>::imWrite(string a, string b) {
	ofstream dosya2(a+"."+b);
	int k = 0;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			//cout <<this-> matris[i][j] << endl;
			if (matris[i][j] > 120) {
				dosya2 << "*";
				k++;
			}
			else {
				dosya2 << " ";
				k++;
			}
			cout << endl;
		}
	}

}
template<typename enes>
void ýmage<enes>::color2Gray() {
	if (format == "bmp") {
		dizi = new enes[m/3];
		//for (int i = m; i >= 0; i--) {
		//	//dizi[i] = arr2[i] + arr2[i + 1] + arr2[i + 2];
		//	//cout << dizi[i] << endl;
		//	cout << int(arr2[i] & 0xff) << endl;
		//}
		int k = 0;
		char temp;
		for (int i = m - 4; i >= 0; i -= 3)
		{

			temp = arr2[i];
			arr2[i] = arr2[i + 2];
			arr2[i + 2] = temp;
			dizi[k] = (int(arr2[i] & 0xff) + int(arr2[i + 1] & 0xff) + int(arr2[i + 2] & 0xff)) / 3;
		//	cout << dizi[k] << endl;
			k++;
			

		//	cout << "R: " << int(arr2[i] & 0xff) << " G: " << int(arr2[i + 1] & 0xff) << " B: " << int(arr2[i + 2] & 0xff) << endl;
			
		}
	}
	else {
		exit(1);
	}
}
template<typename enes>
void ýmage<enes>::gray2Binary(enes thx) {
	if (format == "bmp") {
		for (int i = 0; i <= m / 3; i++) {
			if (thx < dizi[i]) {
				dizi[i] = 0;
			}
			else {
				dizi[i] = 1;
			}
			//cout << dizi[i] << endl;
		}
	}
	else {
		exit(1);
	}
}
template<typename enes>
void ýmage<enes>::erosion() {

	morfolojik = new int* [width-2];
	for (int i = 0; i < width-2; i++) {
		morfolojik[i] = new int[height-2];
	}
	int toplam = (height - 2) * (width - 2);
	int* morfolojik2 = new int[toplam];
		int sayac = 0;

	dizi2 = new enes* [width];
	for (int i = 0; i < width; i++) {
		dizi2[i] = new enes[height];
	}
	int k = 0;
	for (int i = 0; i < width; i++) {
		for (int j = 0; j < height; j++) {
			dizi2[i][j] = dizi[k];
			//cout << dizi2[i][j];
			k++;

		}
		
	}


		/*for (int a = 0; a < width; a++) {
			for (int b = 0; b < height; b++) {
				if()
			}
		}
	*/
	cout << endl;
	int t = 0, mm = 3, nn = 3;
	k = 0;
	int j;
	int tutucu1 = 0,tutucu2=0;
	bool tut = true;
	for (int i = t; i < width; i++) {
		j = tutucu2;
		for ( j = k; j < height; j++) {

			if (i < t + nn && j < k + mm) {
				//cout << dizi2[i][j]<<" ";
				if (dizi2[i][j]==1 && tut) {
					tut = true;
				}
				else {
					tut = false;
				}

			}

			else if (j >= k + mm-1 && i>=t+nn) {

                tutucu2++;
				k = tutucu2;

				if (tut) {
					morfolojik2[sayac]=1;
					//cout << morfolojik2[sayac]<<" sayac: "<<sayac;
					sayac++;
				}
				else {
					morfolojik2[sayac]=0;
					//cout << morfolojik2[sayac] << " sayac: " << sayac; 
					sayac++;
				}
				tut = true;
				
				 if (j == height-1 ) {
					tutucu1++;
					t = tutucu1;
					k = 0;
					tutucu2 = 0;
					
                    }
				 
                i = tutucu1 - 1;
				j = height;

			}
			

			else if (j >= k + mm - 1 && i ==width-1) {



				//cout<<endl;
				
				tutucu2++;
				k = tutucu2;


				i = tutucu1 - 1;
				j = height;
				if (tut) {
					morfolojik2[sayac]=1;
				//	cout << morfolojik2[sayac] << " sayac: " << sayac;
					sayac++;
				}
				else {
					morfolojik2[sayac]=0;
					//cout << morfolojik2[sayac] << " sayac: " << sayac;
					sayac++;
				}
				tut = true;

			}
			
}

		//cout << endl;

	}

	if (tut) {
		morfolojik2[sayac]=1;
		//cout << morfolojik2[sayac] << " sayac: " << sayac;
		sayac++;
	}
	else {
		morfolojik2[sayac]=0;
		//cout << morfolojik2[sayac] << " sayac: " << sayac;
		sayac++;
	}
	tut = true;

	
	

	sayac = 0;
	for (int i = 0; i < width-2; i++) {
		for (int j = 0; j < height-2; j++) {
			morfolojik[i][j] = morfolojik2[sayac];
			cout << morfolojik[i][j]<<" ";
			sayac++;

		}

	}





	}
template<typename enes>
void ýmage<enes>::dilation() {
	int ortancaS = 0,ortanca=0;
	morfolojik = new int* [width - 2];
	for (int i = 0; i < width - 2; i++) {
		morfolojik[i] = new int[height - 2];
	}
	int toplam = (height - 2) * (width - 2);
	int* morfolojik2 = new int[toplam];
	int sayac = 0;

	dizi2 = new enes * [width];
	for (int i = 0; i < width; i++) {
		dizi2[i] = new enes[height];
	}
	int k = 0;
	for (int i = 0; i < width; i++) {
		for (int j = 0; j < height; j++) {
			dizi2[i][j] = dizi[k];
			//cout << dizi2[i][j];
			k++;

		}

	}


	/*for (int a = 0; a < width; a++) {
		for (int b = 0; b < height; b++) {
			if()
		}
	}
*/
	cout << endl;
	int t = 0, mm = 3, nn = 3;
	k = 0;
	int j;
	int tutucu1 = 0, tutucu2 = 0;
	bool tut = true,tut2=true;
	for (int i = t; i < width; i++) {
		j = tutucu2;
		for (j = k; j < height; j++) {

			if (i < t + nn && j < k + mm) {
				/*cout << dizi2[i][j]<<" ";*/
				ortancaS++;
				if (ortancaS == 5) {
					ortanca = dizi2[i][j];
				}

				if (dizi2[i][j] == 1 && tut) {
					tut = true;
				}
				else {
					tut = false;
				}
				if (dizi2[i][j] == 0 && tut2) {
					tut2 = true;
			}
				else {
					tut2 = false;
				}
				

			}

			else if (j >= k + mm - 1 && i >= t + nn) {

				tutucu2++;
				k = tutucu2;

				if (tut) {
					morfolojik2[sayac] = 1;
					//cout << morfolojik2[sayac];// << " sayac: " << sayac;
					sayac++;
				}
				else if(tut2) {
					morfolojik2[sayac] = 0;
					//cout << morfolojik2[sayac];// << " sayac: " << sayac; 
					sayac++;
				}
				else {
					morfolojik2[sayac] = ortanca;
					/*cout << morfolojik2[sayac];*/
					sayac++;
				}
				tut = true;
				tut2 = true;
				ortanca = 0;
				ortancaS = 0;

				if (j == height - 1) {
					tutucu1++;
					t = tutucu1;
					k = 0;
					tutucu2 = 0;

				}

				i = tutucu1 - 1;
				j = height;

			}


			else if (j >= k + mm - 1 && i == width - 1) {



			/*	cout<<endl;*/

				tutucu2++;
				k = tutucu2;


				i = tutucu1 - 1;
				j = height;
				if (tut) {
					morfolojik2[sayac] = 1;
					//cout << morfolojik2[sayac];// << " sayac: " << sayac;
					sayac++;
				}
				else if(tut2) {
					morfolojik2[sayac] = 0;
					//cout << morfolojik2[sayac];// << " sayac: " << sayac;
					sayac++;
				}
				else {
					morfolojik2[sayac] = ortanca;
					/*cout << morfolojik2[sayac];*/
					sayac++;
				}
				ortanca = 0;
				ortancaS = 0;

				tut = true;
				tut2 = true;

			}

		}

		//cout << endl;

	}

	if (tut) {
		morfolojik2[sayac] = 1;
		//cout << morfolojik2[sayac];// << " sayac: " << sayac;
		sayac++;
	}
	else if(tut2) {
		morfolojik2[sayac] = 0;
		//cout << morfolojik2[sayac];// << " sayac: " << sayac;
		sayac++;
	}
	else {
		morfolojik2[sayac] = ortanca;
		/*cout << morfolojik2[sayac];*/
		sayac++;
	}
	ortanca = 0;
	ortancaS = 0;

	tut = true;
	tut2 = true;




	sayac = 0;
	for (int i = 0; i < width - 2; i++) {
		for (int j = 0; j < height - 2; j++) {
			morfolojik[i][j] = morfolojik2[sayac];
			cout << morfolojik[i][j] << " ";
			sayac++;

		}

	}


}
template<typename enes>
void ýmage<enes>::opening() {
	erosion();
	dilation();
}
template<typename enes>
void ýmage<enes>::closing() {
	dilation();
	erosion();
}
#endif // !IMAGE_H

