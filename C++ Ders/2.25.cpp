#include<iostream>

using namespace std;
void arrayyazdir(int *arrayy){
for(int i=0;i<5;i++){

    cout <<i<<".index"<<arrayy[i]<< endl;

}
}
int main() {


int a[5]={1,2,3,4,5};
arrayyazdir(a);
return 0;
}

