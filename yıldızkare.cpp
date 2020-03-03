#include <stdio.h>

int main()
{
	int kenar;

	printf ("Lutfen karenin kenar uzunlugunu giriniz: ");
	scanf ("%d",&kenar);

	int sayici1=0, sayici2;

	while ( sayici1<kenar )
	{
		sayici2=0;

		while ( sayici2 < kenar )
		{
			printf (" *");
			sayici2++;
		}

		printf ("\n");
		sayici1++;
	}

	return 0;
}
