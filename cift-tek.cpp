#include <stdio.h>
#include <math.h>

int main()

{
int a,b;
printf ("Bir sayi giriniz: ");
scanf ("%d", &a);
b=a%2;
if ( b != 0 )
{printf ("Sayi tek sayidir.");
}
else
{printf ("Sayi cift sayidir.");
}



return 0;


}
