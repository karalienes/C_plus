#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h> 
#include <time.h>

int atama ()
{
	int sifir [7][2] = {0,0,	0,1,	0,2,	0,3,	0,4,	0,5,	0,6};
	int bir [6][2] = {1,1,	1,2,	1,3,	1,4,	1,5,	1,6};
	int iki [5][2] = {2,2,	2,3,	2,4,	2,5,	2,6};
	int uc [4][2] = {3,3,	3,4,	3,5,	3,6};
	int dort [3][2] = {4,4,	4,5,	4,6};
	int bes [2][2] = {5,5,	5,6};
	int alti [1][2] = {6,6};
	
	
	int grup, satir, i, j;
	int dizi[1][1];

etiket0:
	
	srand(time(NULL));
    grup = rand()%7;
    
    if ( grup == 0 )
    {
etiket1:
    	
    	srand(time(NULL));
    	satir = rand()%7;
    	
    	if ( sifir[satir][0] == -1 )
    	{
    		goto etiket1;
		}
		
    	dizi[1][0] = sifir[satir][0];
    	dizi[1][1] = sifir[satir][1];
    	sifir[satir][0] = -1;
	}
	
	else if ( grup == 1 )
	{
etiket2:		
		srand(time(NULL));
    	satir = rand()%6;
    	
    	if ( bir[satir][0] == -1 )
    	{
    		goto etiket2;
		}
		
    	dizi[1][0] = bir[satir][0];
    	dizi[1][1] = bir[satir][1];
    	bir[satir][0] = -1;
	}
	
	else if ( grup == 2 )
	{
etiket3:
		srand(time(NULL));
    	satir = rand()%5;
    	
    	if ( iki[satir][0] == -1 )
    	{
    		goto etiket3;
		}
		
    	dizi[1][0] = iki[satir][0];
    	dizi[1][1] = iki[satir][1];
    	iki[satir][0] = -1;
	}
	
	else if ( grup == 3 )
	{
etiket4:
		srand(time(NULL));
    	satir = rand()%4;
    	
    	if ( uc[satir][0] == -1 )
    	{
    		goto etiket4;
		}
		
    	dizi[1][0] = uc[satir][0];
    	dizi[1][1] = uc[satir][1];
    	uc[satir][0] = -1;
	}
	
	else if ( grup == 4 )
	{
etiket5:
		srand(time(NULL));
    	satir = rand()%3;
    	
    	if ( dort[satir][0] == -1 )
    	{
    		goto etiket5;
		}
		
    	dizi[1][0] = dort[satir][0];
    	dizi[1][1] = dort[satir][1];
    	dort[satir][0] = -1;
	}
	
	else if ( grup == 5 )
	{
etiket6:
		srand(time(NULL));
    	satir = rand()%2;
    	
    	if ( bes[satir][0] == -1 )
    	{
    		goto etiket6;
		}
		
    	dizi[1][0] = bes[satir][0];
    	dizi[1][1] = bes[satir][1];
    	bes[satir][0] = -1;
	}
	
	else 
	{
		satir = 0;
		
		if ( alti[satir][0] == -1 )
    	{
    		goto etiket0;
		}
		
    	dizi[1][0] = alti[satir][0];
    	dizi[1][1] = alti[satir][1];
    	alti[satir][0] = -1;
	}
	
	return;
}



int main ()
{
	
	int oyuncu [28][2];
	int bilgisayar [28][2];
	
	int orta [28][2];
	
	int opuan;
	int bpuan;
	
	int i, j, oyuns;
	
	for (i=0; i<4; i++)
	{
					
	}
	
	
	return 0;					
}









