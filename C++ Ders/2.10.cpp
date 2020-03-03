#include<iostream>
using namespace std;

int main(){
string sys_paralo="123456";
string paralo;

do{
    cout<< "Paralonuzu giriniz:";
    cin>> paralo;
  if(sys_paralo!=paralo){
    cout<<"Paraloyu yanlis girdiniz,tekrar deneyiniz..."<<endl;
  }
}
while(sys_paralo!=paralo);
{
    cout<<"Paraloyu dogru girdiniz..." << endl ;
}




return 0;
}
