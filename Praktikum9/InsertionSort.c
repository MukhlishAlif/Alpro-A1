/*
Nama file: InsertionSort.c
Deskripsi: sorting dengan metode InsertionSort
pembuat: Muhammad Alif Mukhlish - 24060121120001
Tgl Pembuatan: 07 Mei 2022 [16:49]
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//prosedur
void InsertionSort(int T[],int N)
{
    //kamus lokal
    int i,j,min,temp;

    //Algoritma
    for (i=1;i<N;i++){
        temp=T[i];
        j=i-1;
        while (j>=0 && T[j]>temp){
            T[j+1]=T[j];
            T[j]=temp;
            j=j-1;
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
    printf("InsertionSort");
    printf("\n N=10, T berisi {2,89,1,18,20,11,35,23,100,33}");
    printf("\n --------------------------------------------------------\n");
    InsertionSort(T,N);
    for (i = 0; i < N; i++){
         printf("%d ", T[i]);
    }
    return 0;
}
