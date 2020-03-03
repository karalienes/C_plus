#include <stdio.h>

int main ()
{
	int x,kat,a;
	x=0;
	kat=10;
	a=1;
	
	printf ("Lutfen 9 veya daha az haneli bir sayi giriniz: ");
	scanf ("%d",&x);
	
	while (1)
	{
		if ( kat>x )
		{
			break; /*bırak*/
		}
		
		kat=kat*10;
		a=a+1;
	}
	
	printf ("Girdiginiz sayi %d basamaklidir.",a);
	
	return 0;

	
}
