/*Nama File     : BilPrimaN.c*/
/*Deskripsi     : Mencetak bilangan prima sampai dengan bilangan N*/
/*Pembuat       : 24060124140145/Ferdy Prasetya Putra*/
/*Tgl Pembuatan : 09/03/2025 12:45*/

#include <stdio.h> /*Header file*/

int main() {
    /*Kamus*/
    int N, i, j, faktor;

    /*Algoritma*/
    printf("Masukkan bilangan N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Masukan harus lebih dari 0\n");
    } else {
        printf("Bilangan Primanya adalah: ");
        i = 2;
        while (i <= N) {
            faktor = 0;
            j = 1;
            while (j <= i) {
                if (i % j == 0) {
                    faktor++;
                }
                j++;
            }
            if (faktor == 2) {
                printf("%d ", i);
            }
            i++;
        }
        printf("\n");
    }

    return 0;
}
