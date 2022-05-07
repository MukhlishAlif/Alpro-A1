/*
Nama file: SelectionSort.c
Deskripsi: sorting dengan metode SelectionSort
pembuat: Muhammad Alif Mukhlish - 24060121120001
Tgl Pembuatan: 07 Mei 2022 [16:59]
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//prosedur
void SelectionSort(int T[],int N)
{
    //kamus lokal
    int i,j,min,temp;

    //Algoritma
    for (i=0;i<N-1;i++){
        min=i;
        for (j=i+1;j<N;j++){
            if (T[j]<T[min]){
                min=j;
            }
        }temp=T[min];
        T[min]=T[i];
        T[i]=temp;
    }
}


int main()
{
    // Kamus
    int N,i;
    N=10;
    int T[10] = {2,89,1,18,20,11,35,23,100,33};

    // Algoritma
    printf("SelectionSort");
    printf("\n N=10, T berisi {2,89,1,18,20,11,35,23,100,33}");
    printf("\n --------------------------------------------------------\n");
    SelectionSort(T,N);
    for (i = 0; i < N; i++){
         printf("%d ", T[i]);
    }
    return 0;
}
