#include <stdio.h>

int ust (int,int);

int main (){
	
	int a,b;
	
	printf ("2 tam sayi giriniz(2. sayi 1.nin ussunu alir) \n");
	scanf("%d%d",&a,&b);
	printf ("%d nin %d . kuvveti : %d 'dir",a,b,ust (a,b));
	
	return 0;
}

int ust (int x,int y){
	
	int i=1, sonuc=1;
	do{
	
		sonuc = sonuc*x;
		i++;
	}while (i<=y);
	return sonuc;
}
