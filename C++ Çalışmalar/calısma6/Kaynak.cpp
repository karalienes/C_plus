#include<iostream>

using namespace std;


int main() {
	int n;
	cout << "Dizi eleman sayisini giriniz:";
	cin >> n;
	int *dizi = new int[n];
	for (int i = 0; i < n; i++) {
		cout << i << ". index giriniz:";
		cin >> dizi[i];
	}
	int swap;
	for (int j = 0; j < n; j++) {
		if (dizi[j] >= 0) {
			for (int m = 0; m < n; m++) {
				if ((dizi[m] >= 0) && (dizi[j] < dizi[m])) {
					swap = dizi[m];
					dizi[m] = dizi[j];
					dizi[j] = swap;
				}
				}
			}

		}
		
	cout << endl << "Siralanmis hali:" << endl;
	for (int a = 0; a < n; a++) {
		cout << a << ". index:" << dizi[a] << endl;
	}


	return 0;
}