#include <stdio.h>
#include <math.h>

int main()
{ 
int x,sayi,a;
sayi = 0;
a = 0;

printf ("Bir sayi giriniz : ");
scanf ("%d",&x);

while (x>0)
	{
	a = x%10;
	x = x/10;
	
	if ( a==5 )
		{ sayi +=1;
		}	
		
	}
	
	printf ("Girilen sayinin icinde %d tane bes vardir.",sayi);
	
	return 0;
}
