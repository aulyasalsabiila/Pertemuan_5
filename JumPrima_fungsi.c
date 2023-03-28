/* Nama File    : JumPrima_fungsi.c */
/* Deskripsi    : Menampilkan bilangan Prima yang dapat dibentuk dari bilangan integer N sembarang > 0 */
/* Pembuat      : Aulya Salsabila Khairunnisa - 24060122140163 */
/* Tanggal Pembuatan : 28 Maret  2023 */

#include <stdio.h>
#include <stdlib.h>

int isPrime(int n){
    if(n <= 1){
        return 0;
    }
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main()
{
/* Kamus */
    int sum = 0;
    int N; /* Bilangan yang akan ditentukan prima atau bukan. */
    int i;

/* Algoritma */
    printf("N = ");
    scanf("%d",&N);
    if(N <= 1){
        printf("Tidak Ada Bilangan Prima, sehingga Jumlahannya Sn = %d",sum);
    }else{
    printf("2");
    sum = 2;
    for(i = 3; i <= N; i++){
        if(isPrime(i)){
            sum = sum + i;
            printf(" + %d",i);
        }
    }
/* Output */
    printf(" dengan Jumlahan Deret Bilangannya adalah Sn = %d",sum);
    return 0;
    }
}
