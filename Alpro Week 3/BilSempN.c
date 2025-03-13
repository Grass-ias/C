/*Nama File     : BilSempN.c*/
/*Deskripsi     : Mencetak bilangan sempurna sampai dengan bilangan N*/
/*Pembuat       : 24060124140145/Ferdy Prasetya Putra*/
/*Tgl Pembuatan : 09/03/2025 13:32*/

#include <stdio.h> /*Header file*/

/*Notasi Algoritmik*/
/*Program : BilSempN*/
/*Menampilkan semua bilangan sempurna sampai N*/

/*Kamus*/
/*N : integer   { Batas bilangan }*/
/*i, j : integer   { Counter untuk iterasi }*/
/*jumlah_faktor : integer   { Menyimpan jumlah faktor bilangan }*/

/*Algoritma*/
/*input(N)*/
/*for i = 1 to N do*/
/*    jumlah_faktor = 0*/
/*    for j = 1 to i-1 do*/
/*        if (i mod j = 0) then*/
/*            jumlah_faktor = jumlah_faktor + j*/
/*    if jumlah_faktor = i then*/
/*        output(i)*/

int main() {
    /*Kamus*/
    int N, i, j, jumlah_faktor;

    /*Algoritma*/
    printf("Masukkan bilangan N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("N harus lebih besar dari 0!\n");
        return 1;
    }

    printf("Bilangan Sempurna sampai %d adalah: ", N);

    for (i = 1; i <= N; i++) {
        jumlah_faktor = 0;

        for (j = 1; j < i; j++) {
            if (i % j == 0) {
                jumlah_faktor += j;
            }
        }

        if (jumlah_faktor == i) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
