/*Nama File 	: CekPrima.c*/
/*Deskripsi 	: Menentukan apakah N merupakan bilangan prima atau bukan */
/*Pembuat   	: 24060120130062 - Rizal Zeri Subakti*/
/*Tgl Pembuatan	: 21:00 - 21 Maret 2021*/
#include <stdio.h>/*header file*/
/*Program Utama*/
int main()
{
    /*kamus*/
    int n;
    int faktor;
    int i;
    /*algoritma*/
    printf("-------Program CekPrima--------\n\n");
    printf("masukkan nilai n = ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("masukkan nilai n harus positif");
    }
    else
    {
        for (i=1; i<=n; i++)
        {
            if (n % i == 0)
            {
                faktor = faktor + 1;
            }
        }
        if (faktor == 2)
        {
            printf("%d bilangan prima", n);
        }
        else
        {
            printf("%d bukan bilangan prima", n);
        }
    }

    return 0;
}

