#include <stdio.h>

int faktoriyel(int gsayi)
{
	int kat,f=1;
	
	for (kat=1; kat<=gsayi; kat++)
	{
		f=f*kat;
	}
	
	return f;
}

int main()
{
	int n,r,sonuc;
	int a,b;
	
	printf ("n sayisini giriniz: ");
	scanf ("%d",&n);
	
	printf ("r sayisini giriniz: ");
	scanf ("%d",&r);
	
	a=faktoriyel(n);
	b=faktoriyel(n-r);
	sonuc= a/b;
	
	printf ("n\'in r\'li permutasyonu:%d",sonuc);
	
	return 0;
}
