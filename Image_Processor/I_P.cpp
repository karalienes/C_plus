#include<iostream>
#include<string>
#include<sstream>
#include<fstream>

class matris {
public:
	int x;
	int y;

};
class Image :public matris {
public:
	int kýrmýzý;
	int yeþil;
	int mavi;
};

using namespace std;


int main() {

	ifstream dosya1("image1.bin",ios::binary);
	ofstream dosya2("resim.txt");
	char* arr;
	arr = new char[2];
	
	dosya1.read(arr, 2);
	
	int n = int((arr[0] + 256) % 256);
	int m = int((arr[1] + 256) % 256);
	int imgSize = n * m;
	delete arr;
cout << imgSize;
	dosya1.seekg(2, ios::beg);
	arr = new char[imgSize];
	
	dosya1.read(arr, imgSize);
	int size=0;
	

	cout << "*"<<size<<"*"<<endl;
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
	}
	return 0;
}