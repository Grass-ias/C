/*Nama File     : FaktorBil.c*/
/*Deskripsi     : Menentukan faktor bilangan dari N*/
/*Pembuat       : 24060124140145/Ferdy Prasetya Putra*/
/*Tgl Pembuatan : 09/03/2025 11:05*/

#include <stdio.h> /*Header file*/

int main() {
    /*Kamus*/
    int N, i;

    /*Algoritma*/
    printf("Masukkan bilangan N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("N harus lebih besar dari 0!\n");
    } else {
        printf("Faktor bilangan dari %d adalah:\n", N);
        i = 1;

        while (i <= N) {
            if (N % i == 0) {
                printf("%d ", i);
            }
            i++; 
        }
        printf("\n");
    }

    return 0;
}
