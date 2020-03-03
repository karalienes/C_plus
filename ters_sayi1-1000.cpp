#include <stdio.h>
#include <math.h>

int ters_sayi(int gsayi)
{
	int mod,basamak=0;
	
	for (mod=10; gsayi>=10; gsayi=gsayi/10)
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
	int x,sayi;
	
	for (x=1; x<=1000; x++)
	{
		sayi=ters_sayi(x);
		
		printf ("%d\n",sayi);
			
	}
	
	return 0;
}
