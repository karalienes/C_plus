#include <stdio.h>
#include <math.h>

int main ()
{
	int d1,d2,h;
	int s=0;
	int sayac=0;
	
	printf ("Dik kenar         Dik kenar         Hipotenus\n");
	
	for (h=1; h<=500; h++)
	{
		for (d2=1; d2<=h; d2++)
		{
			for (d1=1; d1<=h; d1++)
			{
				if ( ((d1-d2)<= h <=(d1+d2)) && (d1*d1)+(d2*d2)==(h*h) )
				{
					printf ("%d                  %d                     %d \n",d1,d2,h);
					
					s=s+1;
					sayac++;
					
					if (sayac == 70)
						getchar();
				}
			}
		}
	}
	
	printf ("%d tane dik ucgen vardir.\n",s);
	
	return 0;
}
