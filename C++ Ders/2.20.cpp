#include<iostream>
using namespace std;
void degerdegistir(int *af){

*af=20;
}

int main(){

int a=10;
cout<< "a degiskenin degeri"<< a<< endl;
degerdegistir(&a);
cout<<"Yeni deger :"<< a<<endl;


return 0;
}
