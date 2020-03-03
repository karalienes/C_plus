#include<iostream>

using namespace std;

void degerdegistir(int &ref){
ref =20;

}
int main(){

int a=10;
int &ref=a;
ref++;
cout <<"A'nin yeni degeri :"<< a << endl;

degerdegistir(a);
cout << "A'nin yeni degeri:"<< a <<endl ;
return 0;
}
