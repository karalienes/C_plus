#include<iostream>
using namespace std ;


int main(){

int a, b;
string islem;

cout<< "Hesap makinesi pragramina hosgeldiniz..."<< endl;
cout << "1. Ýslem : Toplma islemi"<< endl;
cout << "2. Ýslem : Cýkarma islemi"<< endl;
cout << "3. Ýslem : Carpma islemi"<< endl;
cout << "4. Ýslem : Bolme islemi"<< endl;

cout<< "Islemi giriniz:";
cin >> islem;

if(islem=="1"){
    cout<< "a:";
    cin>> a;
    cout << "b:";
    cin >> b;
    cout<<"Toplamlarý:"<<a+b<< endl;
}
else if(islem=="2"){
    cout<< "a:";
    cin>> a;
    cout << "b:";
    cin >> b;
    cout<<"Farklari:"<<a-b<< endl;

}
else if(islem=="3"){
     cout<< "a:";
    cin>> a;
    cout << "b:";
    cin >> b;
    cout<<"Carpimi:"<<a*b<< endl;

}
else if(islem=="4"){
    cout<< "a:";
    cin>> a;
    cout << "b:";
    cin >> b;
    cout<<"Bolumu:"<<(float)a/b<< endl;

}
else {
    cout<<"Gecersiz islem...";
}

return 0;
}
