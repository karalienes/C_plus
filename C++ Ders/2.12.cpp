#include<iostream>

using namespace std;

int main(){

/* Break : donguyu kýrar
continue : donguyu baþa dondurerek devam ettirir. */

int i=0;
while(i<10){

   if(i==2 || i==4){
    i++;//bu durum olmazsa dongu sonsuza gidecektir.
    continue;
   }

    else if(i== 5){
        break;
    }
    cout << "i:"<< i<< endl;
    i++;
}

return 0;
}
