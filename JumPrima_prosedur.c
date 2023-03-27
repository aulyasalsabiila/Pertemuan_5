/* Nama File    : JumPrima_prosedur.c */
/* Deskripsi    : Menampilkan bilangan Prima yang dapat dibentuk dari bilangan integer N sembarang > 0 */
/* Pembuat      : Aulya Salsabila Khairunnisa - 24060122140163 */
/* Tanggal Pembuatan : 28 Maret  2023 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPrime(int n);

int main()
{
/* Kamus */
    int sum = 0;
    int N; /* Bilangan yang akan ditentukan prima atau bukan */
    int i;

/* Algoritma */
    printf("N=");
    scanf("%d",&N);
    if(N <= 1){
        printf("Tidak Ada Bilangan Prima");
    }
    for(i = 2; i <= N; i++){
        if(isPrime(i)){
            sum = sum + i;
        }
    }
    printf(", sehingga Jumlahannya Sn=%d",sum);
    return 0;
}

bool isPrime(int n){

    if(n <= 1){
        return false;
    }
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
