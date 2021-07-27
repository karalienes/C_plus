#include <stdio.h>                      // #365317 #Mustafa DEMİRHAN #365317@ogr.ktu.edu.tr Degerlendirme 1
#include <stdlib.h>
#include <string.h>
struct Takimayarlari{                                       // Structlar..
    char takimisimleri[20][12];
    char takmaisimler[20];
    int oynadigimacsayisi;
    int galibiyetsayisi;
    int beraberliksayisi;
    int maglubiyetsayisi;
    int attigigolsayisi;
    int yedigigolsayisi;
    int averaj;
    int puan;
}takimlar[20],tasiyici[20],tasiyici2[20];
struct genelayarlar{
    int takimsayisi;
    int galibiyetpuan;
    int beraberlikpuan;
    int maglubiyetpuan;
}ayar;
int ayarlardosyasi()           //Dosyadan alinan ayarlar ve takimlarin structlara islenmesi isleminin yapildigi yer.
{
    char ayarlar[20][20];
    char harfler[20][2]={"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","R","S"};
    int takimsayisi=0,galibiyetpuan=0,beraberlikpuan=0,maglubiyetpuan=0;
    FILE *dosya1;
    dosya1=fopen("ayarlar.txt","r");
    if(dosya1!=NULL){
        fscanf(dosya1,"%s%s",ayarlar);
        fscanf(dosya1,"%d",&takimsayisi);
        fscanf(dosya1,"%s%s",ayarlar);
        fscanf(dosya1,"%d",&galibiyetpuan);
        fscanf(dosya1,"%s%s",ayarlar);
        fscanf(dosya1,"%d",&beraberlikpuan);
        fscanf(dosya1,"%s%s",ayarlar);
        fscanf(dosya1,"%d",&maglubiyetpuan);
        printf("Ayarlar:\n\ntakim sayisi: %d\ngalibiyet puan: %d\nberaberlik puan: %d\nmaglubiyet puan: %d\n\n",takimsayisi,galibiyetpuan,beraberlikpuan,maglubiyetpuan);
        ayar.beraberlikpuan=beraberlikpuan;
        ayar.galibiyetpuan=galibiyetpuan;
        ayar.maglubiyetpuan=maglubiyetpuan;           //struct atamasinin yapildigi yer.
        ayar.takimsayisi=takimsayisi;
    }
    else{
        printf("Ayarlar dosyasi bulunamadi.!!\n");
    }

    int i;
    FILE *dosya2;
    dosya2=fopen("takimlar.txt","r");
    printf("Takimlar:\n\n");
    if(dosya2!=NULL){                                // takimlarin dosyadan alindigi ve structlara gönderildigi yer.
        for(i=0;i<takimsayisi;i++){
            strcpy(takimlar[i].takmaisimler,harfler[i]);
            fscanf(dosya2,"%s",takimlar[i].takimisimleri);
            printf("%s %s\n",takimlar[i].takmaisimler,takimlar[i].takimisimleri);
        }}
    else{
        printf("Takimlar dosyasi bulunamadi.!!\n");
    }
    fclose(dosya1);
    fclose(dosya2);
    return 0;
}
int skorlar(){
    int i;
    int sec3,sec2;//B
    char skrhrf[100][10];
    int secenek,adet;
    char skrsyi[100];
    char elskor[100][4];
    char uh[100][10];
    char us[100];
    int j=0,k=0,minindex=2,uzunluk=0;
    FILE *dosya4;
    FILE *dosya5;
    printf("1-Elle skor girdisi\n2-Dosyadan alinan verilerle tablo olustur\n");
    scanf("%d",&secenek);
    dosya4=fopen("maclar1.txt","a");
    if(secenek==1){                        // Elle girilen deger dosyaya aktarilir.Tablo olusturulurken hepsini okudugu icin yeni girilen skorda dahil olur.
        printf("Kac mac girilecek:\n");
        scanf("%d",&adet);
        printf("Skorlari giriniz:\n");
        for(i=0;i<adet+1;i++){
            gets(elskor);
            fputs("\n",dosya4);
            fputs(elskor,dosya4);
        }
    }
    else if(secenek==2){
        adet=0;
    }
    else{
        printf("Lutfen istenilen degerlerden birini giriniz. ( Program sonlandirildi.!!! )");
        return 0;
    }
    fclose(dosya4);
    dosya5=fopen("maclar1.txt","r");
    if(dosya5!=NULL){                      //Kac adet skor oldugunu bulur.
        while(!feof(dosya5)){
            fscanf(dosya5,"%s",uh);
            fscanf(dosya5,"%d",&us);
            uzunluk++;
        }
        fclose(dosya5);
        dosya4=fopen("maclar1.txt","r");}
    if(dosya4!=NULL){
        for(i=0;i<uzunluk;i++){                   // Dosyadan tum skorlar alinir.
            fscanf(dosya4,"%s",skrhrf[i]);
            fscanf(dosya4,"%d",&skrsyi[i]);
        }
        printf("\n");
        for(i=0;i<ayar.takimsayisi;i++){
            takimlar[i].attigigolsayisi=0,takimlar[i].averaj=0,takimlar[i].beraberliksayisi=0,takimlar[i].galibiyetsayisi=0,takimlar[i].maglubiyetsayisi=0,takimlar[i].oynadigimacsayisi=0,takimlar[i].puan=0,takimlar[i].yedigigolsayisi=0;
        }
        while(k<uzunluk){
            while(minindex<uzunluk){                                                    //Mac tekrarı hatasını vermesini saglar.
                if(strcmp(skrhrf[k],skrhrf[minindex])==0&&strcmp(skrhrf[k+1],skrhrf[minindex+1])==0)
                {
                    printf("Mac tekrari var!!\n");
                    printf("%s vs %s Maci skor tablosuna islenmedi.\n",skrhrf[k],skrhrf[k+1]);
                    skrsyi[minindex]=0,skrsyi[minindex+1]=0;
                    takimlar[k].oynadigimacsayisi=takimlar[k].oynadigimacsayisi-1;
                    takimlar[k].beraberliksayisi=takimlar[k].beraberliksayisi-1;
                    takimlar[k].puan=takimlar[k].puan-ayar.beraberlikpuan;
                }
                minindex=minindex+2;}
            k=k+2;
            minindex=k+2;}
        // Dosyadan alinan skor,galibiyet,beraberlik,maglubiye,oynananmac,puan hesaplandigi ve structlara aktarildigi yer.
        while(j<uzunluk){
            for(i=0;i<ayar.takimsayisi;i++){
                if(strcmp(takimlar[i].takmaisimler,skrhrf[j])==0){
                    takimlar[i].oynadigimacsayisi=takimlar[i].oynadigimacsayisi+1;
                }
                else if(strcmp(takimlar[i].takmaisimler,skrhrf[j+1])==0){
                    takimlar[i].oynadigimacsayisi=takimlar[i].oynadigimacsayisi+1;
                }}
            if(skrsyi[j]>skrsyi[j+1]){
                for(i=0;i<ayar.takimsayisi;i++){
                    if(strcmp(takimlar[i].takmaisimler,skrhrf[j])==0){
                        takimlar[i].galibiyetsayisi=takimlar[i].galibiyetsayisi+1;
                        takimlar[i].puan=takimlar[i].puan+ayar.galibiyetpuan;

                    }
                    else if(strcmp(takimlar[i].takmaisimler,skrhrf[j+1])==0){
                        takimlar[i].maglubiyetsayisi=takimlar[i].maglubiyetsayisi+1;
                        takimlar[i].puan=takimlar[i].puan+ayar.maglubiyetpuan;
                    }
                }
            }
            else if(skrsyi[j]==skrsyi[j+1]){
                for(i=0;i<ayar.takimsayisi;i++){
                    if(strcmp(takimlar[i].takmaisimler,skrhrf[j])==0){
                        takimlar[i].beraberliksayisi=takimlar[i].beraberliksayisi+1;
                        takimlar[i].puan=takimlar[i].puan+ayar.beraberlikpuan;
                    }
                    else if(strcmp(takimlar[i].takmaisimler,skrhrf[j+1])==0){
                        takimlar[i].beraberliksayisi=takimlar[i].beraberliksayisi+1;
                        takimlar[i].puan=takimlar[i].puan+ayar.beraberlikpuan;
                    }
                }
            }
            else{
                for(i=0;i<ayar.takimsayisi;i++){
                    if(strcmp(takimlar[i].takmaisimler,skrhrf[j+1])==0){
                        takimlar[i].galibiyetsayisi=takimlar[i].galibiyetsayisi+1;
                        takimlar[i].puan=takimlar[i].puan+ayar.galibiyetpuan;
                    }
                    else if(strcmp(takimlar[i].takmaisimler,skrhrf[j])==0){
                        takimlar[i].maglubiyetsayisi=takimlar[i].maglubiyetsayisi+1;
                        takimlar[i].puan=takimlar[i].puan+ayar.maglubiyetpuan;
                    }
                }


            }

            j=j+2;}}
    else{
        printf("Maclar dosyasi bulunamadi.");
    }

    printf("\n\n");
    for(i=0;i<ayar.takimsayisi;i++){               //Takimlarin attigi ve yedigi golleri hesaplandigi yer.mod islemi ile deplasman veya ev sahibinin yedigi gollerin hesaplanmasi yapilmistir
        for(j=0;j<uzunluk;j++){
            if(strcmp(takimlar[i].takmaisimler,skrhrf[j])==0){
                takimlar[i].attigigolsayisi = takimlar[i].attigigolsayisi+skrsyi[j];
                if(j%2==0){
                    takimlar[i].yedigigolsayisi = takimlar[i].yedigigolsayisi+skrsyi[j+1];
                }
                else{
                    takimlar[i].yedigigolsayisi = takimlar[i].yedigigolsayisi+skrsyi[j-1];
                }
            }}
        takimlar[i].averaj=takimlar[i].attigigolsayisi-takimlar[i].yedigigolsayisi;
    }
    printf("1-Takma ada gore tablo olustur\n2-Alfabetik(takim ismi) tablo olusur\n3-Puan durumu tablosu olustur\n");
    scanf("%d",&sec3);
    if(sec3==1){                                         //Takma ada gore siralamanin yapildigi yer
        printf("\nTAKMA AD SiRALAMA TABLOSU:\n\n");
        printf(" TAG   T.ismi          |A.GOL|   |Y.GOL|   |AVERAJ|   |GALiBiYET|   |MAGLUBiYET|   |BERABERLiK|   |MAC.S|   |PUAN|\n");
        for(i=0;i<ayar.takimsayisi;i++){
            printf(" |%s|  |%s|        |%d|       |%d|      |%d|         |%d|            |%d|             |%d|         |%d|       |%d|\n",takimlar[i].takmaisimler,takimlar[i].takimisimleri,takimlar[i].attigigolsayisi,takimlar[i].yedigigolsayisi,takimlar[i].averaj,takimlar[i].galibiyetsayisi,takimlar[i].maglubiyetsayisi,takimlar[i].beraberliksayisi,takimlar[i].oynadigimacsayisi,takimlar[i].puan);
        }
        printf("\n1-TakmaAdSiralama tablosu Ciktisi al\n2-Programi sonlandir\n");
        scanf("%d",&sec2);
        if(sec2==1){
            printf("TakmaAdSiralamaTablosu olusturuldu..");
            FILE *dosya6;
            dosya6=fopen("TakmaAdSiralamaTablosu.txt","a");
            fprintf(dosya6," TAG   T.ismi          |A.GOL|   |Y.GOL|   |AVERAJ|   |GALiBiYET|   |MAGLUBiYET|   |BERABERLiK|   |MAC.S|   |PUAN|\n");
            for(i=0;i<ayar.takimsayisi;i++){
                fprintf(dosya6," |%s|  |%s|        |%d|       |%d|      |%d|         |%d|            |%d|             |%d|         |%d|       |%d|\n",takimlar[i].takmaisimler,takimlar[i].takimisimleri,takimlar[i].attigigolsayisi,takimlar[i].yedigigolsayisi,takimlar[i].averaj,takimlar[i].galibiyetsayisi,takimlar[i].maglubiyetsayisi,takimlar[i].beraberliksayisi,takimlar[i].oynadigimacsayisi,takimlar[i].puan);
            }
            fclose(dosya6);
        }
    }
    int m;
    for(i=0;i<ayar.takimsayisi;i++){                                      //Tablonun puan sirasina gore yapilmasini saglar.
        m=i;
        for(j=i;j<ayar.takimsayisi;j++){
            if(takimlar[j].puan>takimlar[m].puan){
                m=j;
            }
        }

        tasiyici[0].puan=takimlar[i].puan,tasiyici[0].attigigolsayisi=takimlar[i].attigigolsayisi,tasiyici[0].averaj=takimlar[i].averaj,tasiyici[0].beraberliksayisi=takimlar[i].beraberliksayisi,tasiyici[0].galibiyetsayisi=takimlar[i].galibiyetsayisi,tasiyici[0].maglubiyetsayisi=takimlar[i].maglubiyetsayisi,tasiyici[0].oynadigimacsayisi=takimlar[i].oynadigimacsayisi,tasiyici[0].yedigigolsayisi=takimlar[i].yedigigolsayisi;
        strcpy(tasiyici[0].takmaisimler,takimlar[i].takmaisimler),strcpy(tasiyici[0].takimisimleri,takimlar[i].takimisimleri);
        takimlar[i].puan=takimlar[m].puan,takimlar[i].attigigolsayisi=takimlar[m].attigigolsayisi,takimlar[i].averaj=takimlar[m].averaj,takimlar[i].beraberliksayisi=takimlar[m].beraberliksayisi,takimlar[i].galibiyetsayisi=takimlar[m].galibiyetsayisi,takimlar[i].maglubiyetsayisi=takimlar[m].maglubiyetsayisi,takimlar[i].oynadigimacsayisi=takimlar[m].oynadigimacsayisi,takimlar[i].yedigigolsayisi=takimlar[m].yedigigolsayisi;
        strcpy(takimlar[i].takmaisimler,takimlar[m].takmaisimler),strcpy(takimlar[i].takimisimleri,takimlar[m].takimisimleri);
        takimlar[m].puan=tasiyici[0].puan,takimlar[m].attigigolsayisi=tasiyici[0].attigigolsayisi,takimlar[m].averaj=tasiyici[0].averaj,takimlar[m].beraberliksayisi=tasiyici[0].beraberliksayisi,takimlar[m].galibiyetsayisi=tasiyici[0].galibiyetsayisi,takimlar[m].maglubiyetsayisi=tasiyici[0].maglubiyetsayisi,takimlar[m].oynadigimacsayisi=tasiyici[0].oynadigimacsayisi,takimlar[m].yedigigolsayisi=tasiyici[0].yedigigolsayisi;
        strcpy(takimlar[m].takmaisimler,tasiyici[0].takmaisimler),strcpy(takimlar[m].takimisimleri,tasiyici[0].takimisimleri);

    }
    if(sec3==3){
        printf("\nPUAN DURUMU TABLOSU:\n\n");

        printf(" TAG   T.ismi          |A.GOL|   |Y.GOL|   |AVERAJ|   |GALiBiYET|   |MAGLUBiYET|   |BERABERLiK|   |MAC.S|   |PUAN|\n");
        for(i=0;i<ayar.takimsayisi;i++){
            printf(" |%s|  |%s|        |%d|       |%d|      |%d|         |%d|            |%d|             |%d|         |%d|       |%d|\n",takimlar[i].takmaisimler,takimlar[i].takimisimleri,takimlar[i].attigigolsayisi,takimlar[i].yedigigolsayisi,takimlar[i].averaj,takimlar[i].galibiyetsayisi,takimlar[i].maglubiyetsayisi,takimlar[i].beraberliksayisi,takimlar[i].oynadigimacsayisi,takimlar[i].puan);
        }
        printf("\n1-Puan durumu tablosu Ciktisi al\n2-Programi sonlandir\n");
        scanf("%d",&sec2);
        if(sec2==1){
            printf("PuanDurumuTablosu olusturuldu..");
            FILE *dosya6;
            dosya6=fopen("PuanDurumuTablosu.txt","a");
            fprintf(dosya6," TAG   T.ismi          |A.GOL|   |Y.GOL|   |AVERAJ|   |GALiBiYET|   |MAGLUBiYET|   |BERABERLiK|   |MAC.S|   |PUAN|\n");
            for(i=0;i<ayar.takimsayisi;i++){
                fprintf(dosya6," |%s|  |%s|        |%d|       |%d|      |%d|         |%d|            |%d|             |%d|         |%d|       |%d|\n",takimlar[i].takmaisimler,takimlar[i].takimisimleri,takimlar[i].attigigolsayisi,takimlar[i].yedigigolsayisi,takimlar[i].averaj,takimlar[i].galibiyetsayisi,takimlar[i].maglubiyetsayisi,takimlar[i].beraberliksayisi,takimlar[i].oynadigimacsayisi,takimlar[i].puan);
            }
            fclose(dosya6);
        }
    }

    else{
        printf("\nProgram sonlandirildi..");}

    fclose(dosya4);
    m=0,j=0;
    for(i=0;i<ayar.takimsayisi;i++){                                      //Tablonun Alfabetik(takim) sirasina göre yapilmasini saglar.
        m=i;
        for(j=i;j<ayar.takimsayisi;j++){
            if(strcmp(takimlar[j].takimisimleri,takimlar[m].takimisimleri)<0){
                m=j;
            }
        }
        tasiyici2[0].puan=takimlar[i].puan,tasiyici2[0].attigigolsayisi=takimlar[i].attigigolsayisi,tasiyici2[0].averaj=takimlar[i].averaj,tasiyici2[0].beraberliksayisi=takimlar[i].beraberliksayisi,tasiyici2[0].galibiyetsayisi=takimlar[i].galibiyetsayisi,tasiyici2[0].maglubiyetsayisi=takimlar[i].maglubiyetsayisi,tasiyici2[0].oynadigimacsayisi=takimlar[i].oynadigimacsayisi,tasiyici2[0].yedigigolsayisi=takimlar[i].yedigigolsayisi;
        strcpy(tasiyici2[0].takmaisimler,takimlar[i].takmaisimler),strcpy(tasiyici2[0].takimisimleri,takimlar[i].takimisimleri);
        takimlar[i].puan=takimlar[m].puan,takimlar[i].attigigolsayisi=takimlar[m].attigigolsayisi,takimlar[i].averaj=takimlar[m].averaj,takimlar[i].beraberliksayisi=takimlar[m].beraberliksayisi,takimlar[i].galibiyetsayisi=takimlar[m].galibiyetsayisi,takimlar[i].maglubiyetsayisi=takimlar[m].maglubiyetsayisi,takimlar[i].oynadigimacsayisi=takimlar[m].oynadigimacsayisi,takimlar[i].yedigigolsayisi=takimlar[m].yedigigolsayisi;
        strcpy(takimlar[i].takmaisimler,takimlar[m].takmaisimler),strcpy(takimlar[i].takimisimleri,takimlar[m].takimisimleri);
        takimlar[m].puan=tasiyici2[0].puan,takimlar[m].attigigolsayisi=tasiyici2[0].attigigolsayisi,takimlar[m].averaj=tasiyici2[0].averaj,takimlar[m].beraberliksayisi=tasiyici2[0].beraberliksayisi,takimlar[m].galibiyetsayisi=tasiyici2[0].galibiyetsayisi,takimlar[m].maglubiyetsayisi=tasiyici2[0].maglubiyetsayisi,takimlar[m].oynadigimacsayisi=tasiyici2[0].oynadigimacsayisi,takimlar[m].yedigigolsayisi=tasiyici2[0].yedigigolsayisi;
        strcpy(takimlar[m].takmaisimler,tasiyici2[0].takmaisimler),strcpy(takimlar[m].takimisimleri,tasiyici2[0].takimisimleri);


    }
    if(sec3==2){
        printf("\nALFABETiK SiRALAMA TABLOSU:\n\n");

        printf(" TAG   T.ismi          |A.GOL|   |Y.GOL|   |AVERAJ|   |GALiBiYET|   |MAGLUBiYET|   |BERABERLiK|   |MAC.S|   |PUAN|\n");
        for(i=0;i<ayar.takimsayisi;i++){
            printf(" |%s|  |%s|        |%d|       |%d|      |%d|         |%d|            |%d|             |%d|         |%d|       |%d|\n",takimlar[i].takmaisimler,takimlar[i].takimisimleri,takimlar[i].attigigolsayisi,takimlar[i].yedigigolsayisi,takimlar[i].averaj,takimlar[i].galibiyetsayisi,takimlar[i].maglubiyetsayisi,takimlar[i].beraberliksayisi,takimlar[i].oynadigimacsayisi,takimlar[i].puan);
        }
        printf("\n1-AlfabetikSiralamaTablosu Ciktisi al\n2-Programi sonlandir\n");
        scanf("%d",&sec2);
        if(sec2==1){
            printf("AlfabetikSiralamaTablosu olusturuldu..");
            FILE *dosya6;
            dosya6=fopen("AlfabetikSiralamaTablosu.txt","a");
            fprintf(dosya6," TAG   T.ismi          |A.GOL|   |Y.GOL|   |AVERAJ|   |GALiBiYET|   |MAGLUBiYET|   |BERABERLiK|   |MAC.S|   |PUAN|\n");
            for(i=0;i<ayar.takimsayisi;i++){
                fprintf(dosya6," |%s|  |%s|        |%d|       |%d|      |%d|         |%d|            |%d|             |%d|         |%d|       |%d|\n",takimlar[i].takmaisimler,takimlar[i].takimisimleri,takimlar[i].attigigolsayisi,takimlar[i].yedigigolsayisi,takimlar[i].averaj,takimlar[i].galibiyetsayisi,takimlar[i].maglubiyetsayisi,takimlar[i].beraberliksayisi,takimlar[i].oynadigimacsayisi,takimlar[i].puan);
            }
            fclose(dosya6);
        }}
}
int main()       // fonksiyonlarin calistigi yer.
{
    ayarlardosyasi();
    skorlar();

    return 0;
}