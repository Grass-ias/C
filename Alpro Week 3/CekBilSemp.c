/*Nama File     : CekBilSemp.c*/
/*Deskripsi     : Menentukan apakah sebuah bilangan N adalah bilangan sempurna atau bukan*/
/*Pembuat       : 24060124140145/Ferdy Prasetya Putra*/
/*Tgl Pembuatan : 09/03/2025 12:25*/

#include <stdio.h> /*Header file*/

int main() {
    /*Kamus*/
    int N, i, JF;
    JF = 0; 
    i = 1; 

    /*Algoritma*/
    printf("Masukkan bilangan N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("N harus lebih besar dari 0!\n");
    } else {
        while (i < N) {
            if (N % i == 0) {
                JF += i;
            }
            i++; 
        }

        if (JF == N) {
            printf("%d adalah Bilangan Sempurna\n", N);
        } else {
            printf("%d adalah Bukan Bilangan Sempurna\n", N);
        }
    }

    return 0;
}
