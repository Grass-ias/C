/*Nama File     : FaktorBil.c*/
/*Deskripsi     : Menentukan faktor bilangan dari N*/
/*Pembuat       : 24060124140145/Ferdy Prasetya Putra*/
/*Tgl Pembuatan : 09/03/2025 11:05*/

#include <stdio.h> /*Header file*/

/*Notasi Algoritmik*/
/*Program : FaktorBil*/
/*Menentukan faktor bilangan dari N*/

/*Kamus*/
/*N : integer   { Bilangan yang akan dicari faktornya }*/
/*i : integer   { Counter untuk mencari faktor }*/

/*Algoritma*/
/*input(N)*/
/*i = 1*/
/*while i <= N do*/
/*    if (N mod i = 0) then*/
/*        output(i)*/
/*    i = i + 1*/

int main() {
    /*Kamus*/
    int N, i;

    /*Algoritma*/
    printf("Masukkan bilangan N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("N harus lebih besar dari 0!\n");
        return 1;
    }

    printf("Faktor bilangan dari %d adalah:\n ", N);
    i = 1; 

    while (i <= N) {
        if (N % i == 0) {
            printf("%d ", i);
        }
        i++; // Increment i
    }

    return 0;
}

