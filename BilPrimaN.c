/*Nama File 	: BilPrimaN.c*/
/*Deskripsi 	: Mencetak jumlah bilangan prima dari bilangan N */
/*Pembuat   	: 24060120130062 - Rizal Zeri Subakti*/
/*Tgl Pembuatan	: 21:15 - 21 Maret 2021*/
#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    printf("Masukkan bilangan N: ");
    scanf("%d", &n);

    if (n == 1) {
        printf("1 bukan merupakan bilangan prima");
    }
    else if(n <=0 ){
        printf("Masukkan bilangan harus positif");
    }
    else{
        for (int i = 2; i <= n; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
        }

    }

    return 0;
}
