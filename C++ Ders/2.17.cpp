#include<iostream>

using namespace std;
void factorial(int long sayi ){
int faktoriyel=1;
for (int i=1;i<=sayi;i++){

    faktoriyel*=i;
}
cout << "Faktoriyel:"<<faktoriyel<<endl;
}
int main(){
int long sayi;
cout<<"Bir sayi giriniz:";
cin>> sayi;
factorial(sayi);


return 0;
}
