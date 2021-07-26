// ÇALIŞMALAR.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//
#include<string>
#include<string.h>
#include <iostream>
// classtan procted ve public degerlere kalıtım alınabilir sadece private degerlere sadece kendi sınıf ulasbilir.
using namespace std;
class canlilar {
public:
	string tur;
	string cins;
	canlilar();

};
canlilar::canlilar() {
	cout << "\t\t-----Canlilar alamine hoşgeldiniz------" << endl;
 }
class hayvanlar :public canlilar {
public:
	int ayaksayisi;
	int elsayisi;
	hayvanlar();

};
hayvanlar::hayvanlar() {
	cout << "Cinsini giriniz:";
	cin >> cins;
	cout << "Turunu giriniz:";
	cin >> tur;
	cout << "ayak sayisini giriniz:";
	cin >> ayaksayisi;
	cout << "el sayisini giriniz:";
	cin >> elsayisi;
	cout << cins << tur << ayaksayisi << elsayisi << endl;
}
class bitkiler :public canlilar {
public:
	bitkiler();

};

bitkiler::bitkiler() {
	cout << "Cinsini giriniz:";
	cin >> cins;
	cout << "Turunu giriniz:";
	cin >> tur;
}
int main()
{
	canlilar c;
	hayvanlar h;
	bitkiler b;
	system("Pause");
	return 0;
}

// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
