#include<iostream>

using namespace std;
void  printArray(const int *ptr1 , const int *ptr2)
{// burdaký *ptr1 gosterdýgý degereý degýstýremez.Yani ordaký degerý degýstýremezdýk.

    for(;ptr1!=ptr2;ptr1++){
        cout << "Eleman:"<< *ptr1<< endl;
    }
}
int main() {
int arrayy[]={10,20,30,40,50,60,70,80,90,100};


printArray(arrayy+2,arrayy+7);


return 0;
}
