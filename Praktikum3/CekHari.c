/*
Nama file: CekHari.c
Deskripsi: menggunakan kondisional untuk menampilkan nama hari sesuai input 1-7 yang dimasukan
pembuat: Muhammad Alif Mukhlish - 24060121120001
Tgl Pembuatan: 08 maret 2022 [11:54]
*/

#include <stdio.h>
#include <stdlib.h>


//main program
int main()
{
//Kamus
   int i;

//Algoritma
   printf("Cek Hari Melalui Input Bilangan 1-7");
   printf("\n --------------------------------------------------------");
   printf("\n Masukan Bilangan 1-7 : ");
   scanf("%d",&i);//input
   printf("\n --------------------------------------------------------");
   if (!(1<=i && i<=7)){
        printf("\n Masukan nomor hari tidak tepat");
   }else{
        switch (i){
        case 1:
            printf("\n hari yang sesuai : Senin");
            break;
        case 2:
            printf("\n hari yang sesuai : Selasa");
            break;
        case 3:
            printf("\n hari yang sesuai : Rabu");
            break;
        case 4:
            printf("\n hari yang sesuai : Kamis");
            break;
        case 5:
            printf("\n hari yang sesuai : Jumat");
            break;
        case 6:
            printf("\n hari yang sesuai : Sabtu");
            break;
        case 7:
            printf("\n hari yang sesuai : Minggu");
            break;
        }
   }
}
