#include <stdio.h>

double matris[10][10], birim[10][10], toplam[10][10];

void RasyonelMatrisT(int satir, double x, double mat[10][10])
{
	int i,j;
	double rsm[10][10];

	for (i=0; i<satir; i++)
	{
		for (j=0; j<satir; j++)
		{
			if ( i==j )
			{
				birim[i][j]=1;		
			}
			else
			{
				birim[i][j]=0;
			}
		}
	}
	
	for (i=0; i<satir; i++)
	{
		for (j=0; j<satir; j++)
		{
			rsm[i][j]=x*birim[i][j];
		}
	}
	
	for (i=0; i<satir; i++)
	{
		for (j=0; j<satir; j++)
		{
			toplam[i][j]= rsm[i][j] + mat[i][j];
		}
	}
}




int main ()
{
	int i,j;
	double a,ks;
	
	printf ("Kare matrisiniz icin satir ve sutun sayisini giriniz: ");
	scanf ("%lf",&a);
	
	for (i=0; i<a; i++)
	{
		for (j=0; j<a; j++)
		{
			printf ("%d. satir %d. sutun elemanini giriniz: ",i+1,j+1);
			scanf ("%lf",&matris[i][j]);
			
		}
	}
	
	printf ("Eklemek istediginiz rasyonel sayiyi giriniz: ");
	scanf ("%lf",&ks);
	
	RasyonelMatrisT(a, ks, matris);
	printf("\n\n");
	for (i=0; i<a; i++ )
	{
		for (j=0; j<a; j++)
		{
			printf ("%lf ",toplam[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
