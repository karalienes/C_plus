#include<stdio.h>
#include<math.h>

int main ()
{
	int i,x,sayi,fakt,faktoriyel;
	
	
	fakt =1;
	printf ("Faktoriyeli Alinacak sayiyi giriniz : ");
	scanf ("%d",&x);
	printf ("%4s%21s\n","sayi","Faktoriyel");
	printf("\3t 0 \21t 1 \n");
	for (i=1;i<=x;i++)
	{
		fakt = fakt * i;
		
		printf("%3d%21d\n",i,fakt);
	}	


		
	return 0 ;
}
