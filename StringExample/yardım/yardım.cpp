// yardım.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//
#include<string>
#include <iostream>
using namespace std;



char *My_strstr(char* , char* );
int  My_Strlen(char*);
int main()
{
	char* den = new char[100];
	char* den3 = new char[100];
	cout << "String giriniz:";
	cout << endl;
	string den2;
	string den4;
	getline(cin, den4);
	cout << "String giriniz(2):";
	cout << endl;
	getline(cin, den2);


	for (int i = 0; size(den2); i++) {
		den[i] = den2[i];
		//cout << den[i] << endl;
		if (den[i] == '\0') {
			break;
		}
	}
	for (int i = 0; size(den4); i++) {
		den3[i] = den4[i];
		//cout << den3[i] << endl;
		if (den3[i] == '\0') {
			break;
		}
	}
	//den=My_strstr(den, den3);
	//cout <<den ;
	int deneme = My_Strlen(den3);
	cout << deneme;
}
char * My_strstr(char *a, char* b) {
	int i = 0;
	int k = 0;
	char* deneme = new char[100];
	/*for (int i = 0; i < 100; i++) {
		deneme[i] = NULL;
	}
	*/

	while (a[i] != '\0') {
		if (a[i] == b[k]) {
			k++;
			deneme[i] = a[i];
			i++;
			
			if (b[k] == '\0') {
				i = i - k;
				/*return My_strstr(a,b)+(*a);*/
				return deneme;
			}

		}
		else {
			k = 0;
			i++;
		}
	}



};
int My_Strlen(char* a) {
	int i = 0;
	while (a[i] != '\0') {
		i++;
	}

	return i;
}
