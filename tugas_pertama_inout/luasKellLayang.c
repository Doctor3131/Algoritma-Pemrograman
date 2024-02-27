/*Nama File 	: temp.c*/
/*Deskripsi 	: template penulisan program bahasa C*/
/*Pembuat   	: <diisikan Nim-Nama>*/
/*Tgl Pembuatan	: <diisikan tanggal dan jam>*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ /*Kamus*/
    int s1; /*sisi satu layang-layang dalam meter*/
    int s2; /*sisi dua layang-layang dalam meter*/
    int d1; /*diagonal satu layang-layang dalam meter*/
    int d2; /*diagonal dua layang-layang dalam meter*/
    int Kell; /*keliling dari lingkaran*/
    float Luas; /*luas dari lingkaran*/

  /*Algoritma*/
    printf("\n@@@@@@@@ PROGRAM MENCARI LUAS DAN KELILING LAYANG @@@@@@@@@@\n");
    printf("\nmasukan nilai Sisi 1: ");
    scanf("%d", &s1);
    printf("masukan nilai Sisi 2: ");
    scanf("%d", &s2);
    printf("masukan nilai diagonal 1: ");
    scanf("%d", &d1);
    printf("masukan nilai diagonal 2: ");
    scanf("%d", &d2);

    Luas = 0.5*d1*d2;
    Kell = 2*(s1+s2);

    printf("\n---------------------HASIL------------------------\n");
    printf("Luas layangan adalah: %0.1f meter\n", Luas);
    printf("keliling layangan adalah: %d meter\n", Kell);
    printf("--------------------------------------------------\n");


  return 0;
}
