#include <stdio.h>

int main ()
{
	int i, sayi, toplam;
	
	sayi=1;
	toplam=1;
	
	for (i=1; i<150; i++)
	{
		sayi=sayi+2;
		toplam=toplam+sayi;
		
		printf  ("\n Sayi = %d    toplam = %d",sayi,toplam);
	}
	

	return 0;
	
}
