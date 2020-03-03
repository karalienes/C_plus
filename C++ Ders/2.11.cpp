#include<iostream>

using namespace std;

int main(){

int sayi;
int faktoriyel=1;
cout << "Bir sayi giriniz:"<< endl;
cin >> sayi;
for(int i=1;i<=sayi;i++){

    faktoriyel*=i;

}

cout<<"Faktoriyel:"<< faktoriyel<< endl;


return 0;
}
