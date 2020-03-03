#include <stdio.h>
#include <math.h>

int ters_sayi(int gsayi)
{
	int mod,basamak=0;
	
	for (mod=10; gsayi>0; gsayi=gsayi/10)
	{
		basamak=gsayi%mod;
		
		int dizi [40],i=1;
		
		dizi[i]=basamak;
		
		printf ("%d",dizi[i]);
		
		i++;		
		
	}
}


int main()
{
	int x;
	
	printf ("Bir sayi giriniz: ");
	scanf ("%d",&x);
	
	ters_sayi (x);
	
	return 0;
}
