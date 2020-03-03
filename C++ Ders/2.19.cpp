#include<iostream>

using namespace std;


int main(){

int a=5;
 int * ptr =&a;

 cout <<"Degiskenin adresi:"<<&a<<endl;
 cout <<"Degiskenin adresi :"<< ptr << endl;
cout <<"Degiskenin adresi :"<< *ptr << endl;
cout <<"Degiskenin adresi :"<< a << endl;
* ptr= 6;
cout <<"Degiskenin adresi :"<< *ptr << endl;
a=7;
cout <<"Degiskenin adresi :"<< *ptr << endl;
return 0;
}
