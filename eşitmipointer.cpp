#include<stdio.h>

int ara(const char * a, const char * b);

int main()
{
	char x[]="osmanli";
	char y[]="osman";
	
	if(ara(&x[0], &y[0])==1)
	{
		printf("Aranan kan bulundu");
	}
	else{
		printf("Malesef kansýzlýktan gideceksin");
	}
}

int ara(const char * a, const char * b)
{
	int i, ks, say;
	
	for (i=0; i<100; i++)
	{
		if ( *b == '\0')
		{
			ks=i;
			break;
		}
		
		else 
		{
			*b++;
		}
	}
	for (i=0; i<ks; i++)
	{
		*b--;
	}
	
	for (i=0; i<ks; i++)
	{
		if ( *a == *b)
		{
			say++;
		}
		*a++;
		*b++;
	}
	
	if ( say == ks)
	{ 
		return 1;
	}
	
	else 
	{
		return 0;
	}
}
