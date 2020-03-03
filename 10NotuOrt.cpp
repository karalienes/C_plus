#include<stdio.h>

int main()
{
	
	float sayici,toplam,notu;
	float ortalama;
	
	sayici=1;
	toplam=0;
	
	while(sayici <=3){
		
		printf("Notu giriniz:");
		scanf("%f",&notu);
		toplam = toplam + notu;
		sayici = sayici + 1;
		
	}
	
	ortalama = (float)toplam/3;
	printf("Sinifin Ortalamasi %f dir",ortalama);
	
	return 0;
	
}
