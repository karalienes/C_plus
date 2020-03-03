#include <stdio.h>
#include <math.h>

int determinant (int matris[] [100], int n)
{
	int son;
	
	return son;	
}

int main ()
{
	int a;
	int sonuc;
	int i, j;
	
	printf ("Kare matris için satir ve sutun sayisini giriniz: ");
	scanf ("%d %d",&a);
	
	int mat [a] [a];
	
	for (i=1; i=a; i++)
	{
		for (j=1; j=a; j++)
		{
			printf ("%d. satir %d. sutun elemanini giriniz: ",i,j);
			scanf ("%d",mat [i] [j]);
			
		}
	}
	
	sonuc = determinant (mat, a);
	
	return 0;
}
