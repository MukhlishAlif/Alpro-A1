/*
Nama file: LuasBujursangkar.c
Deskripsi: menghitung luas bujursangkar dengan menginput nilai dan menampilkanya
pembuat: Muhammad Alif Mukhlish - 24060121120001
Tgl Pembuatan: 01 maret 2022
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
//Kamus
   int sisi;
   float luas;

//Algoritma
   printf("----------------------- Menghitug Luas Bujursangkar -----------------------");
   printf("\nMasukan panjang sisi =");
   scanf("%d",&sisi);//input
   luas = sisi*sisi;//proses hitung luas bujur sangkar
   printf("---------------------------- Luas Bujursangkar ----------------------------");
   printf("\nLuas (s x s) = %.2f",luas);//output
   return 0;
}
