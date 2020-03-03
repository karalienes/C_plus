#include<iostream>

using namespace std;

int main(){
int array[]={1,2,3,4};
cout<< array[1]<< endl;
cout << array[3]<< endl;
cout << array<<endl;// arrayın baslangıc adresını verecektır.
cout << array+1<<endl;// bir sonradakı kutucuga git demektir.
cout << array +2 << endl; // daha sonrakı kutucuga gıder
// 4 er 4 er artması sebebı int deger 4 byte oldugu ıcındır.

int *array2=array;

cout << array2<< endl;
cout << array2+1<< endl;
cout << array2+2<< endl;
array2=array2 +1;
cout << "Pointerin yeni degeri:"<< endl;
cout <<array2 << endl;

return 0;
}
