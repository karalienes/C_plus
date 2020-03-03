#include <stdio.h>

int main()
{
	
	int dizi[100],i,toplam=0;
	
	for (i=1;i<=10;i++)
	{
		printf("%d. sayiyi giriniz: ",i);
		scanf("%d",&dizi[i]);
		
		toplam = toplam + dizi[i];
	}
	
	printf("Girdiginiz sayilarin toplami= %d",toplam);
	return 0;
}
