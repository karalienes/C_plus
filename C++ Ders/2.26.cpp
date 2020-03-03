#include<iostream><
// const'in kullaným sekili anlatýlmaktadýr.
using namespace std ;


int main(){

const int a[]={10,20,30,40,50};
// const ile tanımlanan ifadeler degıstırelemez.Sonradan herhangi birsey atanmaz.
for(int i=0; i<5;i++){
    cout << "A dizinin yeni degerleri :"<< a[i]<< endl;
}



return 0;
}
