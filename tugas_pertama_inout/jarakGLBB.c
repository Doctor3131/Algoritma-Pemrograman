/*Nama File 	: jarakGLBB*/
/*Deskripsi 	: mencari jarak gerak lurus berubah beraturan*/
/*Pembuat   	: <24060123120035-siriel wafa nuriel fahri>*/
/*Tgl Pembuatan	: <22/02/2024 pukul: 11.00 AM>*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ /*Kamus*/
  float v0; /*kecepatan awal*/
  float t; /*waktu dalam detik*/
  float a; /*percepatan dalam meter per detik kuadrat*/
  float s; /*jarak benda*/

  /*Algoritma*/
  printf("\n@@@@@@@@ PROGRAM MENCARI JARAK GLBB @@@@@@@@@@\n");
  printf("\nmasukan nilai kecepatan awal (dalam meter/detik): ");
  scanf("%f", &v0);
  printf("masukan nilai waktu (dalam detik): ");
  scanf("%f", &t);
  printf("masukan nilai percepatan (meter/detik kuadrat): ");
  scanf("%f", &a);

  s = (v0*t) + 0.5*(a*(t*t));

  printf("\n---------------------HASIL------------------------\n");
  printf("hasilnya adalah: %.2f meter\n", s);
  printf("--------------------------------------------------\n");
  return 0;
}
