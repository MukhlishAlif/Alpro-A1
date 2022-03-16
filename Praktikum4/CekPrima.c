/*
Nama file: CekPrima.c
Deskripsi: menggunakan perulangan untuk mencari apakah suatu bilangan merupakan bilangan prima dari suatu inputan
pembuat: Muhammad Alif Mukhlish - 24060121120001
Tgl Pembuatan: 15 maret 2022 [12:44]
*/

#include <stdio.h>
#include <stdlib.h>

//main program
int main()
{
    // Kamus
    int N,i;

    // Algoritma
    printf("Menentukan apakah bilangan prima sebuah bilangan yang diinput");
    printf("\n --------------------------------------------------------");
    printf("\n Masukan Bilangan : ");
    scanf("%d",&N);//input
    printf("\n --------------------------------------------------------");
    for(i=2; i<=N;i++){
        if (N % i == 0){
            if (i==N){
                printf("\n prima ");
                break;
            }else{
                printf("\n bukan prima ");
                break;
            }
        }
    }
    return 0;
}
