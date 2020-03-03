#include <stdio.h>
#include <math.h>
#include <conio.h>

int uce_bolum (int gelen_sayi)
{
	if ( gelen_sayi % 3 == 0 )
	{
		printf ("Girdiginiz sayi ucun tam katidir.");
	}
	
	else 
	{
		printf ("Girdiginiz sayi uce bolunmez.");
	}
}


int main ()
{
	int x;
 
 	printf ("Bir sayi giriniz: ");
	scanf ("%d",& x);
	
	uce_bolum(x);
	
	return 0;
}
