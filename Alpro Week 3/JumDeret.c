/*Nama File     : JumDeret.c*/
/*Deskripsi     : Menghitung jumlah total dari deret bilangan 1 + 2 + ... + N*/
/*Pembuat       : 24060124140145/Ferdy Prasetya Putra*/
/*Tgl Pembuatan : 06/03/2025 08:15*/

#include <stdio.h> /*Header file*/

/*Notasi Algoritmik*/
/*Program : JumDeret*/
/*Menjumlahkan deret bilangan dari 1 sampai N*/

/*Kamus*/
/*N : integer   { Batas bilangan }*/
/*i : integer   { Counter untuk iterasi }*/
/*jumlah : integer   { Menyimpan hasil penjumlahan }*/

/*Algoritma*/
/*input(N)*/
/*jumlah = 0*/
/*i = 1*/
/*while i <= N do*/
/*    jumlah = jumlah + i*/
/*    i = i + 1*/
/*output(jumlah)*/

int main() {
    /*Kamus*/
    int N, i, jumlah;

    /*Algoritma*/
    printf("Masukkan bilangan N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("N harus lebih besar dari 0!\n");
        return 1;
    }

    jumlah = 0;
    i = 1;

    while (i <= N) {
        jumlah += i;
        i++;
    }

    printf("Jumlah deret dari 1 sampai %d adalah: %d\n", N, jumlah);
    return 0;
}
