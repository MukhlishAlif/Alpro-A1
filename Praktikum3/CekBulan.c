/*
Nama file: CekBulan.c
Deskripsi: menggunakan kondisional untuk menampilkan nama bulan sesuai input 1-12 yang dimasukan
pembuat: Muhammad Alif Mukhlish - 24060121120001
Tgl Pembuatan: 08 maret 2022 [12:02]
*/

#include <stdio.h>
#include <stdlib.h>

//main program
int main()
{
//Kamus
   int i;

//Algoritma
   printf("Cek Bulan Melalui Input Bilangan 1-12");
   printf("\n --------------------------------------------------------");
   printf("\n Masukan Bilangan 1-12 : ");
   scanf("%d",&i);//input
   printf("\n --------------------------------------------------------");
   if (!(1<=i && i<=12)){
        printf("\n Masukan nomor bulan tidak tepat");
   }else{
        switch (i){
        case 1:
            printf("\n bulan yang sesuai : Januari");
            break;
        case 2:
            printf("\n bulan yang sesuai : Februari");
            break;
        case 3:
            printf("\n bulan yang sesuai : Maret");
            break;
        case 4:
            printf("\n bulan yang sesuai : April");
            break;
        case 5:
            printf("\n bulan yang sesuai : Mei");
            break;
        case 6:
            printf("\n bulan yang sesuai : Juni");
            break;
        case 7:
            printf("\n bulan yang sesuai : Juli");
            break;
        case 8:
            printf("\n bulan yang sesuai : Agustus");
            break;
        case 9:
            printf("\n bulan yang sesuai : September");
            break;
        case 10:
            printf("\n bulan yang sesuai : Oktober");
            break;
        case 11:
            printf("\n bulan yang sesuai : November");
            break;
        case 12:
            printf("\n bulan yang sesuai : Desember");
            break;
        }
   }
}
