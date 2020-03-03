#include <stdio.h>
#include <math.h>

double dMod (double mas, double md)
{
	double sonuc;
	sonuc = fmod (mas, md);
	return sonuc;
}

int main()
{
	double a,b,son;
	
	printf ("Mod alinacak sayiyi giriniz: ");
	scanf ("%lf",&a);
	printf ("Hangi sayiya gore mod alinacagini giriniz: ");
	scanf ("%lf",&b);
	
	son = dMod(a,b);
	
	printf ("%lf in %lf e bolumunden kalan %lf dir.",a,b,son);
	
	return 0;
}
