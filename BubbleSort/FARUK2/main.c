#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
void bubbleSort(int a[], int size) {
	int temp;
	int j, i;
	int karsi = 0;
	int yerde = 0;
	for ( i=0 ; i < size ; i++) {
		for ( j=0 ; j < size ; j++) {
			karsi++;
			if ((a[j] > a[j + 1]) && (j+1<size))  {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				yerde++;
			}
		}
	}
	printf("Toplam karsilastirma %d, Toplam yer degistirme: %d", karsi, yerde);
}
void selectionSort(int a[], int size) {
	int tutucu, temp;
	int i, j;
	int yerde=0, karsi=0;
	for ( i = 0; i<size - 1; i++) {
		tutucu = i;
		for (j = i;j<size; j++) {
			karsi++;
			if (a[j] < a[tutucu]) {
				tutucu = j;
			}
			
		}
		

		if (tutucu != j) {
			temp = a[i];
			a[i] = a[tutucu];
			a[tutucu] = temp;
			yerde++;
		}
	}
	printf("Toplam karsilastirma %d, Toplam yer degistirme: %d", karsi, yerde);
}
int main(void) {
	int array[5];
	time_t t;
	srand((unsigned)time(&t));
	for (int i = 0; i < 5; i++) {
		array[i] = rand() % 100;
		printf("%d\n", array[i]);
		
	}
	printf("\n\n");
	bubbleSort(array, 5);
	printf("\n\n");
	selectionSort(array, 5);
	printf("\n\n");
	for (int i = 0; i < 5; i++) {
		printf("%d\n", array[i]);
	}

	return 0;

}