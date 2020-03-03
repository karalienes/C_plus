#include <stdio.h>

int main()
{
	int a=1, sayici=1;
	
	while ( sayici <=50 )
	{
		printf ("%d",a);
		a++;
		
		if ( (sayici%6)==0 )
		{
			printf ("\n");
			
		}
		
		else
		{
			printf ("\t");
		}
		
		sayici++;
	}
	
	return 0;
}
