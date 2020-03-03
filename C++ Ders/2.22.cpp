#include<iostream>

using namespace std;

int main(){

string arrayy[]={"Enes","baban","anan"};
string *ptr=arrayy;
cout << ptr+1<< endl;
cout << *(ptr +1)<< endl;// alttakı durum ıle aynıdır
cout << ptr[1]<< endl;// Bu kullanım daha cok kullanılmaktadır.



return 0;
}

