#include<iostream>

using namespace std;

int main() {

int Array[3];
Array[0]=10;
Array[1]=20;
Array[2]=30;

cout << "0.index:" << Array[0]<< endl;
cout << "1.index:" << Array[1]<< endl;
cout << "2.index:" << Array[2]<< endl;

int array[]={10,20,30,40};
for(int i=0;i<4;i++){
    cout<<i<<".index:"<<array[i]<<endl;
}
string array2[4];
for(int j=0;j<4;j++){
    cout<<j<<".index'i giriniz:";
    cin>> array2[j];
}
for(int k=0;k<4;k++){
    cout<<k<<".index"<<array2[k]<<endl;
}
return 0;
}
