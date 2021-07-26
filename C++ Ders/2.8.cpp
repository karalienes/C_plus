#include<iostream>
using namespace std;

int main(){

// or || bir tanesi true ise sonuc true olacakt�r.
// and && ikiside true olursa sonuc true olacakt�r.
// not | false ise true , true ise false olacakt�r.

string sys_username = "enes_karali";
string sys_password = "yazlimci";

string username , password;


cout << "Kullanici adinizi giriniz:";
cin>> username ;
cout << "Paralonizi giriniz:";
cin >> password ;

if((sys_password==password)&&(sys_username==username)){
    cout<< "Sisteme hosgeldiniz Enes Bey";

}
else if((sys_username!=username) && (sys_password==password)){
    cout<< "Lutfen kullanici adini dogru giriniz";

}
else if((sys_password!=password)&& (sys_username==username)){
    cout<< "Lutfen sifrenizi dogru giriniz";
}
else{
    cout <<"Sifre ve kullanici adini yanlis girdiniz!!!";
}




return 0;
}
