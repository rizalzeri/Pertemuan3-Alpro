/*Nama File 	: CekSempurna.c*/
/*Deskripsi 	: Memeriksa apakah masukan n bilangan sempurna */
/*Pembuat   	: 24060120130062 - Rizal Zeri Subakti*/
/*Tgl Pembuatan	: 21:15 - 21 Maret 2021*/
#include <stdio.h>/*header file*/
/*Program Utama*/
int main()
{
    /*kamus*/
    int i;
    int n;
    int jml;

    /*algoritma*/
    printf("-------Program CekSempurna--------\n\n");
    printf("masukkan nilai n = ");
    scanf("%d", &n);
    if (n<=0)
    {
        printf("masukkan nilai n harus positif");
    }
    else if (n==1)
    {
        printf("1");
    }
    else
    {
        jml = 0;
        for (i=1;i<n;i++)
        {
            if (n % i == 0)
            {
                jml = jml + i;
            }
        }
        if (jml == n)
        {
            printf("%d termasuk bilangan sempurna", jml);
        }
        else
        {
            printf("%d bukan bilangan sempurna", n);
        }
    }

    return 0;

}
