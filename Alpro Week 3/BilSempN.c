/*Nama File     : BilSempN.c*/
/*Deskripsi     : Mencetak bilangan sempurna sampai dengan bilangan N*/
/*Pembuat       : 24060124140145/Ferdy Prasetya Putra*/
/*Tgl Pembuatan : 09/03/2025 13:32*/

#include <stdio.h> /*Header file*/

int main() {
    /* Kamus */
    int N, i = 2, j, sum;
    
    /* Algoritma */
    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Masukan harus lebih dari 0\n");
    } else {
        printf("Bilangan Sempurna hingga %d adalah: ", N);
        while (i <= N) {
            sum = 0;
            j = 1;
            while (j < i) {
                if (i % j == 0) {
                    sum += j;
                }
                j++;
            }
            if (sum == i) {
                printf("%d ", i);
            }
            i++;
        }
        printf("\n");
    }
    
    return 0;
}
