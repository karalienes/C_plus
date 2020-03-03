#include <stdio.h>
#include <math.h>

int main ()
{
	int x,a,b,c,d;
	
	printf ("Bir sayi giriniz: ");
	scanf ("%d",&x);
	
	a=0;
	b=-1;
	d=0;
	
	while (x>0)
	{
		a=x%10;
		b=b+1;
		c=pow(2.0,b); /*üst alma*/
		d+=(a*c);
		x=x/10;
	}
	
	printf ("Girilen sayinin onluk tabandaki degeri: %d",d);
	
	return 0;
}
