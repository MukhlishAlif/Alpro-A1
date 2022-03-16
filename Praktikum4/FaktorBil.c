/*
Nama file: FaktorBil.c
Deskripsi: menggunakan perulangan untuk mencari faktor dari suatu bilangan
pembuat: Muhammad Alif Mukhlish - 24060121120001
Tgl Pembuatan: 15 maret 2022
*/

#include <stdio.h>
#include <stdlib.h>

//main program
int main()
{
//Kamus
   int N;
   int i;
   i=N;

//Algoritma
   printf("Mencari faktor Sebuah Bilangan");
   printf("\n --------------------------------------------------------");
   printf("\n Masukan Bilangan : ");
   scanf("%d",&N);//input
   printf("\n --------------------------------------------------------");
   while (N>=1){
    if ((N % i)==0){
        printf("\n %d",i);
        --i;
    }else{
        --i;
    }
   }
 return 0;
}
