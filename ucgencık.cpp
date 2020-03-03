#include <stdio.h>

int main ()
{
	int a,b,c;
	for (a=3;a<500;a++)
		for(b=a;b<500;b++)
			for(c=b;c<500;c++)
			{
				if(a*a+b*b==c*c and a+b+c==1000)
				
						printf ("%d-%d-%d",a,b,c);
			}
	return 0;
}
