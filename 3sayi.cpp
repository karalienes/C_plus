#include<stdio.h>

int main()
{
	int a,b,c;
	int carpim,toplam,ortalama,t,z;
	
	
	printf ("Burada 3 sayinin Carpim Toplama ortalama ve kiyaslamasini Yapacagiz :\n");
	printf ("Lutfen 3 Tam Sayi Giriniz :\n");
	scanf ("%d%d%d",&a,&b,&c);
	
	carpim = a*b*c;
	printf ("Carpimin Sonucu : %d",carpim);
	
	toplam = a+b+c;
	printf ("\nToplamin Sonucu : %d",toplam);
	
	ortalama = (a+b+c)/3;
	printf ("\nOrtalamalari    : %d",ortalama);

	if(a < b){
		z = a;
	}
	else{
	
		z = b;
	}
	if (z < c){
	
		printf ("\nEn Kucuk Sayi :%d",z);
	
	}
	else {
	
		printf ("\nEn Kucuk Sayi :%d ",c);
		
	}
	if(a > b){
		t = a;
	}
	else{
	
		t = b;
	}
	if (z > c){
	
		printf ("\nEn buyuk Sayi :%d",t);
	
	}
	else {
	
		printf ("\nEn buyuk Sayi :%d ",c);
		
	}
	return 0;
	


}
