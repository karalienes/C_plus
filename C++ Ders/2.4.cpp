#include<iostream>
using namespace std;

int main(){
int x,y,z,toplam=0;
cout << "1. sayiyi giriniz :"<< endl;
cin >> x ;

cout << "2. sayiyi giriniz :"<< endl;
cin >> y ;

cout << "3. sayiyi giriniz :"<< endl;
cin >> z ;

toplam=x+y+z;
cout<< "Girilen degerlerin toplami =" << toplam<< endl;

// Toplu bir sekýlde sayýlarý almak için kullanýlan yontem bu sekýldedeýr :

int a,b,c,toplamiki=0;
cout << "Sayilari  giriniz :"<< endl;
cin >> a >> b>> c;
toplamiki=a+b+c;
/** \brief
 *
 * \param
 * \param
 * \return
 *
 */
cout<< "Girilen degerlerin toplami =" << toplamiki<< endl;
return 0;
}
