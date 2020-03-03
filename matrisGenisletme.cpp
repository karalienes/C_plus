#include <stdio.h>
#include <math.h>

int sarus (int matris [][3] )
{
	int i,j, genis[5][3];
	
	for (i=1; i<4; i++)
	{
		for (j=1; j<4; j++)
		{
			genis[i][j]=matris[i][j];
		}
	}
	
	int a=1,b=1;
	
	for (i=4; i<6; i++)
	{
		for (j=1; j<4; j++)
		{
			genis[i][j]= matris[a][b];
			b++;
		}
		
		a++;
	}
	
	
}

int main ()
{
	int i,j, mat[3][3],son;
	
	for (i=1; i<4; i++)
	{
		for (j=1; j<4; j++)
		{
			printf ("%d. satir %d. sutun elemanini giriniz: ",i,j);
			scanf ("%d",&mat [i][j]);
		}
	}
	
	son = sarus (mat);
	
	return 0;
}
