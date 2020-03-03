#include <stdio.h>

int mod (int mas, int md)
{
	int sonuc;
	
	sonuc = mas % md;
	
	return sonuc;
}

int main()
{
	int a,b,son;
	
	printf ("Mod almak istediginiz sayiyi giriniz: ");
	scanf ("%d",&a);
	printf ("Hangi sayiyiya gore mod almak istediginizi giriniz: ");
	scanf ("%d",&b);
	
	son = mod(a,b);
	
	printf ("\nMod = %d",son);
	
	return 0;
}
