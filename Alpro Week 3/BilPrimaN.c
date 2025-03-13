/*Nama File     : BilPrimaN.c*/
/*Deskripsi     : Mencetak bilangan prima sampai dengan bilangan N*/
/*Pembuat       : 24060124140145/Ferdy Prasetya Putra*/
/*Tgl Pembuatan : 09/03/2025 12:45*/

#include <stdio.h> /*Header file*/

/*Notasi Algoritmik*/
/*Program : BilPrimaN*/
/*Menampilkan semua bilangan prima sampai N*/

/*Kamus*/
/*N : integer   { Batas bilangan }*/
/*i, j : integer   { Counter untuk iterasi }*/
/*prima : boolean  { Menyatakan apakah suatu bilangan adalah prima }*/

/*Algoritma*/
/*input(N)*/
/*i = 2*/
/*while i <= N do*/
/*    prima = true*/
/*    j = 2*/
/*    while j * j <= i do*/
/*        if (i mod j = 0) then*/
/*            prima = false*/
/*            break*/
/*        j = j + 1*/
/*    if prima then*/
/*        output(i)*/
/*    i = i + 1*/

int main() {
    /*Kamus*/
    int N, i, j;
    int prima;

    /*Algoritma*/
    printf("Masukkan bilangan N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("N harus lebih besar dari 0!\n");
        return 1;
    }

    printf("Bilangan Prima sampai %d adalah: ", N);
    
    i = 2; // Inisialisasi bilangan pertama yang dicek
    while (i <= N) {
        prima = 1; // Asumsikan i adalah bilangan prima
        j = 2;

        while (j * j <= i) { // Mengecek faktor dari 2 hingga akar i
            if (i % j == 0) {
                prima = 0;
                break;
            }
            j++; // Increment j
        }

        if (prima) {
            printf("%d ", i);
        }

        i++; // Increment i ke bilangan berikutnya
    }

    printf("\n");
    return 0;
}
