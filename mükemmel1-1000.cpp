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
	int x,t,sayac=0;
	
	for (x=1; x<=1000; x++)
	{
		t=msayi(x);
		if (t==x)
		{
			printf ("%d\n",x);
			sayac++;
		}
	}
	
	printf ("\n%d tane mikemmel sayi vardir.",sayac);
	
	return 0;
}
