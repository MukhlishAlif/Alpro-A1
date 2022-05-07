/*
Nama file: BubleSort.c
Deskripsi: sorting dengan metode bublesort
pembuat: Muhammad Alif Mukhlish - 24060121120001
Tgl Pembuatan: 07 Mei 2022 [16:21]
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//prosedur
void BubleSort(int T[],int N)
{
    //kamus lokal
    int i,j,temp;

    //Algoritma
    for (i=0;i<N-1;i++){
        for (j=0;j<N-1;j++){
            if (T[j]>T[j+1]){
                temp=T[j];
                T[j]=T[j+1];
                T[j+1]=temp;
            }
        }
    }
}

int main()
{
    // Kamus
    int N,i;
    N=10;
    int T[10] = {2,89,1,18,20,11,35,23,100,33};

    // Algoritma
    printf("BubleSort");
    printf("\n N=10, T berisi {2,89,1,18,20,11,35,23,100,33}");
    printf("\n --------------------------------------------------------\n");
    BubleSort(T,N);
    for (i = 0; i < N; i++){
         printf("%d ", T[i]);
    }
    return 0;
}
