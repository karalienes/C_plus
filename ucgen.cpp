#include<stdio.h>
#include<math.h>

int main ()
{
	
	int x,y,z;
	
	
	
	for (x=1;x<=500;x++)
	{
		for(y=1;y<=500;y++){
				
				for (z=1;z<=500;z++){
					
					if(x*x+y*y == z*z){
						printf ("%4d%9d%15d\n",x,y,z);
					}
		
					
				}
				
		}
		
	}	

	

		
	return 0 ;
}
