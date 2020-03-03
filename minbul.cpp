#include <stdio.h>

float minbul (const float *dizi, int boyut);

int main ()
{
	float dizi[]={0,1,-6,7,8,-3,-5,7,5,-7};
	float min;
	int boyut=10;
	
	min = minbul (dizi, boyut);
	
	printf ("%f",min);
	
	return 0;
}

float minbul (const float *dizi, int boyut)
{
	int i;
	float min = *dizi;
	*dizi++;
	
	for (i=1; i<boyut; i++)
	{
		if ( min > *dizi )
		{
			min = *dizi;
		}
		
		*dizi++;
	}
	
	return min;
}
