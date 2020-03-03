#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
	
	int i,yuz,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0;
	srand(time(NULL));
	for (i=1;i<=6000;i++){
		yuz = 1 + rand()%6;
		switch (yuz) {
			
			case 1:
				a1++;		
				break;
			case 2:
				a2++;
				break;
			case 3:
				a3++;
				break;	
			case 4:
				a4++;
				break;
			case 5:
				a5++;
				break;
			case 6:
				a6++;
				break;
		}
						
	}
	printf ("1in gelme sayisi : %d\n",a1);
	printf ("2in gelme sayisi : %d\n",a2);
	printf ("3in gelme sayisi : %d\n",a3);
	printf ("4in gelme sayisi : %d\n",a4);
	printf ("5in gelme sayisi : %d\n",a5);
	printf ("6in gelme sayisi : %d\n",a6);
	
	return 0 ;
}
