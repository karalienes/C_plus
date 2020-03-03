#include<iostream>
#include"Create.h"

using namespace std;

Create::Create(int ıd, string massege)
	:ObjectId(ıd), message(massege) {
	cout << "object" << ObjectId << "constractıon run" << message << endl;
}
Create::~Create()
{
	cout << "object" << ObjectId << "destructon" << message << endl;
}

Create first(1, "enes");
int main() {

	Create second(2, "ali");
	static Create tree(3, "veli");
	return 0;
	// ilk normaller sonra statıkler sonra global nesneler yıkılır.
	//en en basta fonksiyon ile oluşturulan nesneler yıkılır cunku fonksıyonun ısı bıtınce fonksıyon
	//kapatılacagı ıcın nesnelerınıde otamatık olarak yıkmak zorunda kalacaktır.
}