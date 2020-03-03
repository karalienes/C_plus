#include <stdio.h>

void findGreaterValues (int param[], int size, int value);

int main ()
{
	int myArray[]={23,12,0,40,4,60,90,78,89};
	findGreaterValues (myArray, 9, 59);
	return 0;
}

void findGreaterValues (int param[], int size, int value)
{
	int i,sayac=0;
	
	for (i=0; i<size; i++)
	{
		if ( param[i]>value )
		{
			sayac++;
		}
	}
	
	printf ("%d tane deger 59\'dan buyuktur.",sayac);
	
}
