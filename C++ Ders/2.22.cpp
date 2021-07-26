#include<iostream>

using namespace std;

int main(){

string arrayy[]={"Enes"};
string *ptr=arrayy;
cout << ptr+1<< endl;
cout << *(ptr +1)<< endl;// alttak� durum �le ayn�d�r
cout << ptr[1]<< endl;// Bu kullan�m daha cok kullan�lmaktad�r.



return 0;
}

