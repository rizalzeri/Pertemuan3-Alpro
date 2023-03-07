/*Nama File 	: FaktorBil.c*/
/*Deskripsi 	: Menampikan faktor bilangan dari integer N positif */
/*Pembuat   	: 24060120130062 - Rizal Zeri Subakti*/
/*Tgl Pembuatan	: 20:50 - 21 Maret 2021*/

#include <stdio.h>/*header file*/
/*Program Utama*/
int main()
{
    /*kamus*/
    int n;

    /*algoritma*/
    printf("-------Program FaktorBil--------\n\n");
    printf("masukkan nilai n = ");
    scanf("%d", &n);
    printf("Faktor bilangan dari %d adalah\n", n);
    if (n > 0)
    {
        for (int i=1; i<=n; i++)
        {
            if (n % i == 0)
            {
                printf("%d\n", i);
            }
        }

    }
    else
    {
        printf("masukkan nilai n harus positif");
    }

    return 0;
}
