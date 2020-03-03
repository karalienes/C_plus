 #include <stdio.h>

float poztoplam (const float *dizi, int boyut);

int main ()
{
	float dizi[]={0,1,-6,7,8,-3,-5,7,5,-7};
	float toplam;
	int boyut=10;

	toplam = poztoplam (dizi, boyut);

	printf ("%f",toplam);

	return 0;
}

float poztoplam (const float *dizi, int boyut)
{
	int i;
	float poztop=0;


	for (i=0; i<boyut; i++)
	{
		if ( 0 < *dizi )
		{
			poztop += *dizi;
		}

		*dizi++;
	}

	return poztop;
}
