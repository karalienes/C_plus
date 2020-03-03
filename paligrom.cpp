#include <stdio.h>
#include <math.h>

int main()
{
	int x,a,b,c,d,e;
	int f,g,h,i;
	printf ("Bes haneli bir sayi giriniz: ");
	scanf ("%d" , &x);
	a = x/10000;
	f = x%10000;
	b = f/1000;
	g = f%1000;
	c = g/100;
	h = g%100;
	d = h/10;
	i = h%10;
	e = i;

	if ( a==e && b==d )
	{
		printf ("Sayi paligrom sayidir.");
	}
	else
	{
		printf ("Sayi paligrom sayi degildir.");
	}

return 0;
}
