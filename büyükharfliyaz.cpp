#include <stdio.h>

int yaz(char *dizi)
{
	int i;
	
	for (i=0; i<100; i++)
	{
		if ( *dizi == ' ')
		{
			printf ("\n");
			*dizi++;
			*dizi -= 32;
		}
		
		if ( *dizi == '\0')
		{
			break;
		}
		
		printf ("%c",*dizi);
		
		*dizi++;
		
	}
	
}

int main()
{
	char str[] = "Ali program yaz!";
	
	yaz (str);
	
	return 0;
}
