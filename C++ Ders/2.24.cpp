#include<iostream>

using namespace std;
void arrayyazdir(int array[]){
for(int i=0;i<5;i++){

    cout <<i<<".index"<<array[i]<< endl;

}
}
int main() {


int a[5]={1,2,3,4,5};
arrayyazdir(a);
return 0;
}
