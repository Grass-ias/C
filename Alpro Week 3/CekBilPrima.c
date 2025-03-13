/*Nama File     : CekBilPrima.c*/
/*Deskripsi     : Menentukan apakah sebuah bilangan N adalah bilangan prima atau bukan*/
/*Pembuat       : 24060124140145/Ferdy Prasetya Putra*/
/*Tgl Pembuatan : 09/03/2025 11:54*/

#include <stdio.h> /*Header file*/

/*Notasi Algoritmik*/
/*Program : CekBilPrima*/
/*Menentukan apakah bilangan N adalah bilangan prima*/

/*Kamus*/
/*N : integer   { Bilangan yang akan diperiksa }*/
/*i : integer   { Counter untuk mencari faktor }*/
/*faktor : integer   { Menyimpan jumlah faktor bilangan }*/

/*Algoritma*/
/*input(N)*/
/*faktor = 0*/
/*for i = 1 to N do*/
/*    if (N mod i = 0) then*/
/*        faktor = faktor + 1*/
/*if faktor = 2 then*/
/*    output("Bilangan Prima")*/
/*else*/
/*    output("Bukan Bilangan Prima")*/

int main() {
    /*Kamus*/
    int N, i, faktor;
    faktor = 0;

    /*Algoritma*/
    printf("Masukkan bilangan N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("N harus lebih besar dari 0!\n");
        return 1;
    }

    // Menghitung jumlah faktor dari N
    for (i = 1; i <= N; i++) {
        if (N % i == 0) {
            faktor++;
        }
    }

    // Bilangan prima hanya memiliki 2 faktor: 1 dan dirinya sendiri
    if (faktor == 2) {
        printf("%d adalah Bilangan Prima\n", N);
    } else {
        printf("%d adalah Bukan Bilangan Prima\n", N);
    }

    return 0;
}
