/*Nama File 	: jarakPBola*/
/*Deskripsi 	: program mencari jarak lintasan bola*/
/*Pembuat   	: <24060123120035-siriel wafa nuriel fahri>*/
/*Tgl Pembuatan	: <22/02/2024 pukul 08.22 PM>*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ /*Kamus*/
    const float g = 9.8; /*gravitasi*/
    int v0; /*kecepatan awal*/
    int t; /*waktu dalam detik*/
    float y; /*jarak yang ditempuh benda*/

  
  /*Algoritma*/
  
    printf("\n@@@@@@@@ PROGRAM MENCARI JARAK BENDA PARABOLA @@@@@@@@@@\n");
    printf("\nmasukan nilai v0 (dalam meter/detik): ");
    scanf("%d", &v0);
    printf("masukan nilai t (dalam detik): ");
    scanf("%d", &t);

    y = (v0*t) - ((g*(t*t))/2);

    printf("\n---------------------HASIL------------------------\n");
    printf("hasilnya adalah: %f meter\n", y);
    printf("--------------------------------------------------\n");
}
