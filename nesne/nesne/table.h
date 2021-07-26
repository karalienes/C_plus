#pragma once
#ifndef TABLE_H
#define TABLE_H
#include<string>
#include<ctime>
#include"matris.h"
#include<string>
#include<string.h>
using namespace std;
template<class enes>
class table :public matris<enes>{
public:
	table();
	table(enes, enes, enes);
	table(enes, enes, char);
	void setX(enes a) {
		x = a;
	}
	void setY(enes b) {
		y = b;
	}
	void setTabloX(enes c) {
		tabloX = c;
	}
	void setTabloY(enes d) {
		tabloY = d;
	}
	enes getX() {
		return x;
	}
	enes getY() {
		return y;
	}
	enes getTabloX() {
		return tabloX;
	}
	enes getTabloY() {
		return tabloY;
	}
	enes itemAt(enes, enes);
	enes itemAt(string a);
	string getString(enes );
	enes itemAt(string , string );
	void print();
	void setRowNames(string s[], enes n);
	void setColNames(string s[], enes n);
protected:
	int x;
	int y;
	int tabloX;
	int tabloY;
	int** matris;
};
template<typename enes>
table<enes>::table() {
	setTabloX(65);
	setTabloY(1);
	setX(10);
	setY(10);
	matris = new enes* [x];
	for (int i = 0; i < x; i++) {
		matris[i] = new enes[y];
	}
	//for (int a = 0; a < x; a++) {
	//	cout << char(tabloX);
	//	tabloX = tabloX + 1;
	//	for (int b = 0; b < y; b++) {
	//		
	//		if (b + 1 == y) {
	//			cout << tabloY;
	//			tabloY = tabloY + 1;
	//		}
	//		for (int i = 0; i < x; i++) {
	//			
	//		
	//			for (int j = 0; j < y; j++) {
	//				matris[i][j] = 0;
	

	//				//	cout << dizi[i][j] << " ";
	//			}
	//			//	cout << endl;
	//		}

	//	}
	//}
	cout << "\t";
	for (int i = 0; i < y; i++) {
		cout << char(tabloX) << "\t";
		tabloX = tabloX + 1;
	}
	for (int i = 0; i < x; i++) {
		cout << endl << tabloY;
		tabloY = tabloY + 1;
		for (int j = 0; j < y; j++) {
			if (j == 0) {
				cout << "\t";
			}
			matris[i][j] = 0;
			cout << matris[i][j] << "\t";
			
		}
		//cout << "\t";
		//cout << endl;
	}
	
	

}
template<typename enes>
table<enes>::table(enes a, enes b, enes c) {
	setTabloX(65);
	setTabloY(1);
	setX(a);
	setY(b);
	matris = new enes* [x];
	for (int i = 0; i < x; i++) {
		matris[i] = new enes[y];
	}

	cout << "\t";
	for (int i = 0; i < y; i++) {
		cout << char(tabloX) << "\t";
		tabloX = tabloX + 1;
	}
	for (int i = 0; i < x; i++) {
		cout << endl << tabloY;
		tabloY = tabloY + 1;
		for (int j = 0; j < y; j++) {
			if (j == 0) {
				cout << "\t";
			}
			matris[i][j] = c;
			cout << matris[i][j] << "\t";
			
		}
		//cout << "\t";
		//cout << endl;
	}
}
template<typename enes>
table<enes>::table(enes a, enes b, char c) {
	srand(time(0));
	setTabloX(65);
	setTabloY(1);
	setX(a);
	setY(b);
	matris = new enes* [x];
	for (int i = 0; i < x; i++) {
		matris[i] = new enes[y];
	}
	if (c == 'r') {
		cout << "\t";
		for (int i = 0; i < y; i++) {
			cout << char(tabloX) << "\t";
			tabloX = tabloX + 1;
		}
		for (int i = 0; i < x; i++) {
			cout << endl << tabloY;
			tabloY = tabloY + 1;
			for (int j = 0; j < y; j++) {
				if (j == 0) {
					cout << "\t";
				}
				matris[i][j] = rand() % 256;
				cout << matris[i][j] << "\t";

			}
			//cout << "\t";
			//cout << endl;
		}
	}
	else {
		cout << "\t";
		for (int i = 0; i < y; i++) {
			cout << char(tabloX) << "\t";
			tabloX = tabloX + 1;
		}
		for (int i = 0; i < x; i++) {
			cout << endl << tabloY;
			tabloY = tabloY + 1;
			for (int j = 0; j < y; j++) {
				if (j == 0) {
					cout << "\t";
				}
				matris[i][j] = c;
				cout << matris[i][j] << "\t";

			}
			//cout << "\t";
			//cout << endl;
		}
	}
}
template<typename enes>
enes table<enes>::itemAt(enes a, enes b)	 {
	if ((a < x) && (b < y)) {
		return matris[a][b];
	}
	
	return 0;

}
template<typename enes>
string table<enes>::getString(enes x) {
	string s(1, x);
	return s;
}
template<typename enes>
enes table<enes>::itemAt(string a) {
	/*string a = a.substr(0, 1);
	string b = a.substr(1,1);
	string c = a.substr(2, 1);
	string isim2;
	for (int i = 0; i < y; i++) {
		char(tabloX) = char(tabloX) + 1;
		for (int j = 0; j < x; j++) {
			(tabloY) = (tabloY) + 1;
			
			
		}
	}*/
	
	string c, d,e;
	int aa = y;
	int bb= x;
	tabloX = tabloX - 1;
	tabloY = tabloY - 1;
	//string a = getString(tabloX);
	cout << "\t";
	for (int i = 0; i < y; i++) {
	//	cout << char(tabloX) << "\t";
		string c = getString(char(tabloX)); 
		tabloX = tabloX - 1;
		aa--;
		
		for (int j = 0; j < x; j++) {
		//	cout << endl << tabloY;
			string d = to_string(tabloY);
			string e = c + d;
			tabloY = tabloY - 1;
			

			
			if (a == e) {
	//			cout << matris[tabloY][aa];
				return matris[tabloY][aa];
				//matris[i][j] = c;
			//	cout << matris[i][j] << "\t";

			}
			if ((tabloY) == 0) {
				tabloY = tabloY + x;
				bb--;
			}

			
		}
	}
	
	return 0;
}
template<typename enes>
enes table<enes>::itemAt(string a, string b) {
	string c, d, e;
	string isim = a + b;
	int aa = y;
	int bb = x;
	tabloX = tabloX - 1;
	tabloY = tabloY - 1;
	//string a = getString(tabloX);
	cout << "\t";
	for (int i = 0; i < y; i++) {
		//	cout << char(tabloX) << "\t";
		string c = getString(char(tabloX));
		tabloX = tabloX - 1;
		aa--;

		for (int j = 0; j < x; j++) {
			//	cout << endl << tabloY;
			string d = to_string(tabloY);
			string e = c + d;
			tabloY = tabloY - 1;



			if (isim == e) {
				return matris[tabloY][aa];
				//matris[i][j] = c;
			//	cout << matris[i][j] << "\t";

			}
			if ((tabloY) == 0) {
				tabloY = tabloY + x;
				bb--;
			}


		}
	}
	return 0;
}
template<typename enes>
void table<enes>::print() {
	cout << "\t";
	for (int i = 0; i < y; i++) {
		cout << char(tabloX) << "\t";
		tabloX = tabloX + 1;
	}
	for (int i = 0; i < x; i++) {
		cout << endl << tabloY;
		tabloY = tabloY + 1;
		for (int j = 0; j < y; j++) {
			if (j == 0) {
				cout << "\t";
			}
			//matris[i][j] = c;
			cout << matris[i][j] << "\t";

		}
		//cout << "\t";
		//cout << endl;
	}
}
template<typename enes>
void table<enes>::setRowNames(string s[], enes n) {
	string sayac;
	cout << endl;
	cout << "\t\t";
	setTabloX(65);
	setTabloY(1);
	for (int i = 0; i < y; i++) {
		cout << char(tabloX) << "\t";
		tabloX = tabloX + 1;
	}

	cout << endl;
	for (int i = 0; i < x; i++) {
		if (i < n) {
			sayac = s[i];
			cout << sayac;
			for (int j = 0; j < y; j++) {
				if (j == 0) {
					cout << "\t";
				}
				//matris[i][j] = c;
				cout << matris[i][j] << "\t";

			}
			cout << endl;
			}

		else {
			cout << i << "\t";
			for (int j = 0; j < y; j++) {
				if (j == 0) {
					cout << "\t";
				}
				
				//matris[i][j] = c;
				cout << matris[i][j] << "\t";

			}	
			cout << endl;
		}
	
		}
	
	}
template<typename enes>
void table<enes>::setColNames(string s[], enes n) {
	string sayac;
	cout << endl;
	cout << "\t";
	setTabloX(65);
	setTabloY(1);
	for (int i = 0; i < y; i++) {
		if (i < n) {
			sayac = s[i];
			cout << sayac;
			tabloX = tabloX + 1;
		}
		else {
			cout << char(tabloX) << "\t";
			tabloX = tabloX + 1;
		}
	}
	for (int i = 0; i < x; i++) {
		cout << endl << tabloY;
		tabloY = tabloY + 1;
		for (int j = 0; j < y; j++) {
			if (j == 0) {
				cout << "\t";
			}
		//	matris[i][j] = c;
			cout << matris[i][j] << "\t";

		}
		//cout << "\t";
		//cout << endl;
	}

}

#endif // !TABLE_H

