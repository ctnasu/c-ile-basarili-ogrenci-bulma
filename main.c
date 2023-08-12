//
//  main.c
//  
//
//  Created by ASUDE on 11.05.2023.
//
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
struct ogrenci{
    char no[3];
    char ad[20];
    float ort;
    char soyad[20];
    int akts;
    int yil;
};
struct ogrenci basarili(struct ogrenci o1,struct ogrenci o2 ){
    struct ogrenci basarili;
    if(o1.ort>o2.ort)
    {
        basarili=o1;
    }
    else if (o1.ort<o2.ort)
    {
        basarili=o2;
    }
    else if(o1.ort==o2.ort)
    {
        if(o1.akts>o2.akts)
        {
            basarili=o1;
        }
        else if (o1.akts<o2.akts)
        {
            basarili=o2;
        }
        else if (o1.akts==o2.akts)
        {
            if(o1.yil<o2.yil)
            {
                basarili=o1;
            }
            else if(o1.yil>o2.yil)
            {
                basarili=o2;
            }
            else if(o1.yil==o2.yil)
            {
                srand(time(NULL));
                int r = rand() % 2 + 1;
            if(r)
            {
                basarili=o1;
            }
                else
                {
                    basarili=o2;
                }
            }
        }
        
    }
    return basarili;
}
int main() {
    struct ogrenci o1, o2,basariliolan;

        printf("Ogrenci 1 bilgilerini girin:\n");
        printf("Numara: ");
        scanf("%s",o1.no);
        printf("Ad Soyad: ");
        scanf("%s%s",o1.ad,o1.soyad);
        printf("Ortalama: ");
        scanf("%f", &o1.ort);
        printf("AKTS: ");
        scanf("%d", &o1.akts);
        printf("Giris Yili: ");
        scanf("%d", &o1.yil);

        printf("\nOgrenci 2 bilgilerini girin:\n");
        printf("Numara: ");
        scanf("%s",o2.no);
        printf("Ad Soyad: ");
        scanf("%s%s",o2.ad,o1.soyad);
        printf("Ortalama: ");
        scanf("%f", &o2.ort);
        printf("AKTS: ");
        scanf("%d", &o2.akts);
        printf("Giris Yili: ");
        scanf("%d", &o2.yil);
    basariliolan=basarili(o1, o2);
    printf("basarili olanin no:%s ad:%s soyad:%s ort:%f akts:%d giris yili:%d",basariliolan.no,basariliolan.ad,basariliolan.soyad,basariliolan.ort,basariliolan.akts,basariliolan.yil);

}
