#include <stdio.h>

int RakamSay (int *sayi, int boyut);

int main()
{
	int x[100];
	int a;
	
	printf ("Basamak sayisini giriniz: ");
	scanf ("%d",&a);
	
	printf ("Lutfen sayiyi giriniz: ");
	scanf ("%d",&x);
	
	RakamSay(x, a);
	
	return 0;
}

int RakamSay (int *sayi, int boyut)
{
	int i,rakam,say=0;
	
	for ( rakam=0; rakam<10; rakam++)
	{
		for (i=0; i<boyut; i++)
		{
			if ( *sayi == rakam )
			{
				say++;
			}
			
			*sayi++;
		}
		
		printf ("%d rakamindan %d tane vardir.\n",rakam, say);
		say=0;
	}

}
