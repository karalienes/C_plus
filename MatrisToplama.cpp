#include <stdio.h>

double mat1[10][10], mat2[10][10], toplam[10][10];
void MatrisToplam (int satir, int sutun, double matris1[][10], double matris2[][10] )
{
	int i,j;
	
	for (i=0; i<satir; i++)
	{
		for (j=0; j<sutun; j++)
		{
			toplam [i][j]= matris1[i][j] + matris2[i][j];
		}
	}
	

}



int main()
{
	int i,j,a,b;
	
	printf ("Satir ve sutun sayilarini giriniz: ");
	scanf ("%d %d",&a,&b);
	
	
	
	for (i=0; i<a; i++ )
	{
		for (j=0; j<b; j++)
		{
			printf ("%d. satir %d. sutun elemanini giriniz: ", i+1, j+1);
			scanf ("%lf",&mat1[i][j]);
		}
	}
	printf("\n\n");
	for (i=0; i<a; i++ )
	{
		for (j=0; j<b; j++)
		{
			printf ("Eklenecek matrisin %d. satir %d. sutun elemanini giriniz: ", i+1, j+1);
			scanf ("%lf",&mat2[i][j]);
		}
	}
	
	MatrisToplam(a,b,mat1,mat2);
	
	printf("\n\n");
	for (i=0; i<a; i++ )
	{
		for (j=0; j<b; j++)
		{
			printf ("%lf ",toplam[i][j]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}
