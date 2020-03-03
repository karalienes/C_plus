#include<iostream>
using namespace std ;

int main(){

int sayi1=10 , sayi2=4;
cout<< "Sayi1 + sayi2:" << sayi1 + sayi2 << endl;
cout<< "Sayi1 - sayi2:" << sayi1 - sayi2 << endl;
cout<< "Sayi1 * sayi2:" << sayi1 * sayi2 << endl;
cout<< "Sayi1 / sayi2:" << sayi1 / sayi2 << endl;
cout<< "Sayi1 / sayi2:" << (float)sayi1 / sayi2 << endl;
int a=5;
cout<< "A'nin degeri:" << a << endl;
//a=a+1;
//a+=1;  Buradaki 3 iþlemde ayný iþi etmektedir!
a++;

cout<< "A'nin degeri:" << a << endl;
//a=a-1;
//a-=1;    Buradaki 3 iþlemde ayný iþi etmektedir!
a--;

cout<< "A'nin degeri:" << a << endl;

return 0;
}
