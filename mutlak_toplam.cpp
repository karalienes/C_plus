#include <stdio.h>
#include <math.h>

float mutlak_toplam (const float *dizi, int boyut);

int main ()
{
	float dizi[]={0,1,-6,7,8,-3,-5,7,5,-7};
	float muttoplam;
	int boyut=10;
	
	muttoplam = mutlak_toplam (dizi, boyut);
	
	printf ("%f",muttoplam);
	
	return 0;
}

float mutlak_toplam (const float *dizi, int boyut)
{
	int i;
	float toplam=0;
	
	
	for (i=0; i<boyut; i++)
	{
		toplam += fabs (*dizi);
		
		*dizi++;
	}
	
	return toplam;
}
