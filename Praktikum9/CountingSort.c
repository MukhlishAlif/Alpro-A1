/*
Nama file: CountingSort.c
Deskripsi: sorting dengan metode CountingSort
pembuat: Muhammad Alif Mukhlish - 24060121120001
Tgl Pembuatan: 07 mei 2022 [20:11]
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//prosedur
void CountingSort(int T[],int N,int max)
{
    //kamus lokal
    int i,j;
    int count[300]={0};

    //Algoritma
    for(i=0;i<N;i++){
        count[T[i]]=count[T[i]]+1;
    }
    for(i=0;i<=max;i++){
        for (j=1;j<=count[i];j++){
            printf("%d ",i);
        }
    }
}
int main()
{
    // Kamus
    int N,i,max=0;
    N=10;
    int T[10] = {2,89,1,18,20,11,35,23,100,33};

    // Algoritma
    printf("SelectionSort");
    printf("\n N=10, T berisi {2,89,1,18,20,11,35,23,100,33}");
    printf("\n --------------------------------------------------------\n");
    for (i=0;i<N;i++){
        if (T[i]>max){
            max=T[i];
        }
    }
    CountingSort(T,N,max);
    return 0;
}
