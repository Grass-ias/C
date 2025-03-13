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

    if (N > 0) {
        printf("Bilangan Prima sampai %d adalah: ", N);

        i = 2; // Inisialisasi bilangan pertama yang dicek
        while (i <= N) {
            faktor = 0; // Reset faktor untuk setiap bilangan i
            j = 1;

            while (j <= i) { // Cek faktor dari 1 sampai i
                if (i % j == 0) {
                    faktor++;
                }
                j++; // Increment j
            }

            if (faktor == 2) { // Bilangan prima hanya memiliki 2 faktor (1 dan dirinya sendiri)
                printf("%d ", i);
            }

            i++; // Increment i ke bilangan berikutnya
        }

        printf("\n");
    } else {
        printf("N harus lebih besar dari 0!\n");
    }

    return 0;
}
