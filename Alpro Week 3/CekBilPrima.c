/*Nama File     : CekBilPrima.c*/
/*Deskripsi     : Menentukan apakah sebuah bilangan N adalah bilangan prima atau bukan*/
/*Pembuat       : 24060124140145/Ferdy Prasetya Putra*/
/*Tgl Pembuatan : 09/03/2025 11:54*/

#include <stdio.h> /*Header file*/

int main() {
    /*Kamus*/
    int N, i, faktor;
    faktor = 0;
    i = 1;

    /*Algoritma*/
    printf("Masukkan bilangan N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("N harus lebih besar dari 0!\n");
    } else {
        while (i <= N) {
            if (N % i == 0) {
                faktor++;
            }
            i++;
        }

        if (faktor == 2) {
            printf("%d adalah Bilangan Prima\n", N);
        } else {
            printf("%d adalah Bukan Bilangan Prima\n", N);
        }
    }

    return 0;
}

