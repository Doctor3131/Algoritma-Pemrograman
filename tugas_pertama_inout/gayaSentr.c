/*Nama File 	: gayaSentr*/
/*Deskripsi 	: mencari gaya sentripetal dari beberapa inputan*/
/*Pembuat   	: <24060123120035-siriel wafa nuriel fahri>*/
/*Tgl Pembuatan	: <22/02/2024 pukul 09.52 PM>*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ /*Kamus*/
    const float pi = 3.14; /*ketetapan pi*/
    float m; /*massa dalam kg*/
    float v; /*kecepatan dalam meter per detik*/
    float r; /*jari-jari dalam meter*/
    float f; /*gaya sentripetal*/

  /*Algoritma*/
    printf("\n@@@@@@@@ PROGRAM MENCARI GAYA SENTRIPETAL @@@@@@@@@@\n");
    printf("\nmasukan nilai massa (dalam kg): ");
    scanf("%f", &m);
    printf("masukan nilai kecepatan (meter per detik): ");
    scanf("%f", &v);
    printf("masukan nilai jari-jari (meter): ");
    scanf("%f", &r);

    f = m*((v*v)/r);

    printf("\n---------------------HASIL------------------------\n");
    printf("hasilnya adalah: %f meter\n", f);
    printf("--------------------------------------------------\n");

  return 0;
}
