#include <stdio.h>
#include <math.h>

int sarus (double matris [][3] )
{
	double sonuc,a,b;

	double sg1, sg2, sg3;
	double sl1, sl2, sl3;
	
	sg1= matris[0][0]*matris[1][1]*matris[2][2];
	sg2= matris[1][0]*matris[2][1]*matris[0][2];
	sg3= matris[2][0]*matris[0][1]*matris[1][2];
	sl1= matris[0][2]*matris[1][1]*matris[2][0];
	sl2= matris[1][2]*matris[2][1]*matris[0][0];
	sl3= matris[2][2]*matris[0][1]*matris[1][0];
	
	a=sg1+sg2+sg3;
	b=sl1+sl2+sl3;
	sonuc=a-b;
	
	return sonuc;
}


int main ()
{
	double mat[3][3],son;
	int i,j;
	
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			printf ("%d. satir %d. sutun elemanini giriniz: ",i+1,j+1);
			scanf ("%lf",&mat [i][j]);
		}
	}
	
	son = sarus (mat);

	printf ("\n Matrisin determinanti: %lf",son);
	
	return 0;
}
