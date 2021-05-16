#include <stdio.h>
#include <math.h>

int msayi (int gsayi)
{
	int bolen, toplam=0;
	
	for ( bolen=1; bolen<gsayi; bolen++ )
	{
		if ( gsayi%bolen == 0 )
		{
			toplam=toplam+bolen;
		}
	}
	
	return toplam;
}

int main ()
{
	int x,sonuc;
	printf ("Bir sayi giriniz: ");
	scanf ("%d",& x);
	
	sonuc=msayi (x);
	
	if ( sonuc==x )
	{
		printf ("Girdiginiz sayi mukemmel sayidir.");
	}
	
	else 
	{
		printf ("Girdiginiz sayi mukemmel sayi degildir.");
	}
	
	return 0;
}
