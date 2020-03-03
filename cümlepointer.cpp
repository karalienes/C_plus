#include <stdio.h>

int tersC (char *cumle);

int main ()
{
	char *giris;
	printf ("Cumlenizi giriniz: ");
	scanf ("%s",&giris[0]);
	
	tersC (&giris[0]);
	
	return 0;
}

int tersC (char *cumle)
{
	int i, ks;
	char *dizi;
	
	for (i=0; i<100; i++ )
	{
		*dizi = *cumle;
		
		if ( *cumle == ' ')
		{
			*dizi++;
			ks++;
		}
		
		else if ( *cumle == '\0')
		{
			break;
		}
		
		*cumle++;
		
	}
	
	for (i=0; i<ks; i++)
	{
		printf ("%p",*dizi);
		*dizi--;
	}
	

}
