#include <stdio.h>

void ters (const char * dizi1, char * dizi2);

int main()
{
	char a[]="edanur";
	char b[100];
	ters (&a[0], &b[0]);
	printf ("%s",b);
}

void ters (const char * dizi1, char * dizi2)
{
	int i, ks;
	
	for (i=0; i<100; i++)
	{
		if ( *dizi1 == '\0')
		{
			ks=i;
			break;
		}
		else
		{
			*dizi1++;
		}
	}
	
	*dizi1--;
	
	for (i=0; i<ks; i++)
	{
		*dizi2 = *dizi1;
		*dizi2++;
		*dizi1--;
	}
}
