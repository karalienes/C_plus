#include <stdio.h>

int main () {
	
	int a,b,i,kucuk ,buyuk;
	printf (" ebob alinacak sayi");
	scanf ("%d%d",&a,&b);
	
	kucuk=a;
	buyuk=b;
	if (b<a) {
		b=kucuk;
		a=buyuk;
	}
	
	for (i=kucuk;i>=1;i--){
		
		if (buyuk%i==0 && kucuk%i==0){
			printf("ebob = %d",i);
			break;
		}
		
	}
	return 0;
}
