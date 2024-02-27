/*Nama File 	: volBoleKerct*/
/*Deskripsi 	: mencari volume bola dan kerucut dari inputan jari-jari*/
/*Pembuat   	: <24060123120035-Siriel Wafa Nuriel Fahri>*/
/*Tgl Pembuatan	: <22/02/2024 pukul 10.12 PM>*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ /*Kamus*/
    const float PHI = 3.1415; /*ketetapan pi*/
    float r; /*jari-jari dalam meter*/
    float Vb; /*volume bola dalam meter kubik*/
    float Vk; /*volume kerucut dalam meter kubik*/
  
  /*Algoritma*/
    printf("\n@@@@@@@@ PROGRAM MENCARI VOLUME BOLA DAN KERUCUT @@@@@@@@@@\n");
    printf("\nmasukan nilai jari-jari (dalam meter): ");
    scanf("%f", &r);

    Vb = (4*(PHI*r*r*r))/3;
    Vk = Vb/2;
  
    printf("\n---------------------HASIL------------------------\n");
    printf("volume bola adalah: %f meter\n", Vb);
    printf("volume kerucut adalah: %f meter\n", Vk);
    printf("--------------------------------------------------\n");


  return 0;
}
