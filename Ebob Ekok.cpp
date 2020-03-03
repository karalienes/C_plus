#include <stdio.h>

int main () {
	
	int a,b,i,x,kucuk ,buyuk;
	printf ("Ebob alinacak sayiyi giriniz : ");
	scanf ("%d%d",&a,&b);
	
	kucuk=a;
	buyuk=b;
	
	
	if (b<a) {
		b=kucuk;
		a=buyuk;
	}
	
	for (i=kucuk;i>=1;i--){
		
		if (buyuk%i==0 && kucuk%i==0){
			printf("%d ve %d'nin Ebob = %d",i);
			break;
		}
		
	}
	
	x = a*b/i;
	printf ("\n%d ve %d nin Ekoku : %d 'dir",a,b,x);
	
	return 0;
}
