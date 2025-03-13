/*Nama File     : CekBilSemp.c*/
/*Deskripsi     : Menentukan apakah sebuah bilangan N adalah bilangan sempurna atau bukan*/
/*Pembuat       : 24060124140145/Ferdy Prasetya Putra*/
/*Tgl Pembuatan : 09/03/2025 12:25*/

#include <stdio.h> /*Header file*/

/*Notasi Algoritmik*/
/*Program : CekBilSemp*/
/*Menentukan apakah bilangan N adalah bilangan sempurna*/

/*Kamus*/
/*N : integer   { Bilangan yang akan diperiksa }*/
/*i : integer   { Counter untuk mencari faktor }*/
/*JF : integer   { Menyimpan jumlah faktor bilangan (kecuali N sendiri) }*/

/*Algoritma*/
/*input(N)*/
/*JF = 0*/
/*i = 1*/
/*while i < N do*/
/*    if (N mod i = 0) then*/
/*        JF = JF + i*/
/*    i = i + 1*/
/*if JF = N then*/
/*    output("Bilangan Sempurna")*/
/*else*/
/*    output("Bukan Bilangan Sempurna")*/

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
        return 1;
    }

    while (i < N) {
        if (N % i == 0) {
            JF += i;
        }
        i++; // Increment i
    }

    if (JF == N) {
        printf("%d adalah Bilangan Sempurna\n", N);
    } else {
        printf("%d adalah Bukan Bilangan Sempurna\n", N);
    }

    return 0;
}