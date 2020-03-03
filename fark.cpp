#include <stdio.h>

void findRange (int param[], int size);

int main()
{
	int myArray[] = {90,25,96,80,90,100,85,90,95,95,85,70,75,81,65,50,90,101};
	findRange (myArray, 18);
	return 0;
}

void findRange (int param[], int size)
{
	int i,fark;
	int max=param[0];
	int min=param[0];
	
	for (i=0; i<size; i++)
	{
		if ( max<param[i] )
		{
			max=param[i];
		}
		
		if ( min>param[i] )
		{
			min=param[i];
		}
	}
	
	fark = max-min;
	
	printf ("maximum fark:%d",fark);
}
