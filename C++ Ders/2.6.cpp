#include<iostream>

using namespace std;

int main(){

 string password ="yazilimbilimi";

  string input;
  cout<<" Lutfen paralonunuzu giriniz: ";
  cin >> input;
  if(password== input){

    cout<< "Paralonuzu dogru girdiniz";

  }
  else {
    cout << "Paralonuzu yanlis girdiniz!!!";
  }

 return 0;
}
