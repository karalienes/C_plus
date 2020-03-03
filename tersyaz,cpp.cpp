#include <stdio.h>

void ters (const char dizi1[], char dizi2[]);

int main()
{
	char a[]="edanur";
	char b[100];
	ters (a, b);
	printf ("%s",b);
}

void ters (const char dizi1[], char dizi2[])
{
	int i, karaktersayisi;
	
	for (i=0; i<100; i++ )
	{
		if ( dizi1[i]=='\0')
		{
			karaktersayisi=i;
			break;
		}
	}

	for (i=0; i<karaktersayisi; i++)
	{
		dizi2[i] = dizi1[karaktersayisi-i-1];
	}
}
