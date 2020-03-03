#include <stdio.h>

int main ()
{
	int i, j; 
	int s=0;
	int a, b;

	printf ("satir sayisi :");
	scanf ("%d",&s);

	
	int dizi1[s] [s];
	int dizi2[s] [s];
	
	for (i=0; i<s; i++)
	{
		for (j=0; j<s; j++)
		{
			printf ("transpozesini bulmak istediginiz matrisin %d. satir %d. sutun elemani: ",i+1,j+1);
			scanf ("%d",&dizi1[i] [j]);
		}	
	}	
	
	printf ("\n verilen matris: \n");
	for (i=0; i<s; i++)
	{
		for (j=0; j<s; j++)
		{
			printf ("%d ",dizi1 [i] [j]);
		}
		
		printf ("\n");
	}
	
	for (i=0, b=0; i<s, b<s; i++, b++)
	{
		for (j=0, a=0; j<s, a<s; j++, a++)
		{
			dizi2[a] [b] = dizi1[i] [j];
		}
			
	}	
	
	printf ("\n matrisin transpozesi: \n");
	for (a=0; a<s; a++)
	{
		for (b=0; b<s; b++)
		{
			printf ("%d ",dizi2[a] [b]);
		}
		
		printf ("\n");	
	}	
	
	return 0;
}
