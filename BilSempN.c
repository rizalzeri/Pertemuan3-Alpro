/*Nama File 	: BilSempN.c*/
/*Deskripsi 	: Mencetak jumlah bilangan sempurna dari bilangan N */
/*Pembuat   	: 24060120130062 - Rizal Zeri Subakti*/
/*Tgl Pembuatan	: 21:15 - 21 Maret 2021*/
#include <stdio.h>

int main() {
   int i, j, sum;
   int n;

   printf("Masukkan bilangan bulat positif N: ");
   scanf("%d", &n);

   for (i = 1; i <= n; i++) {
      sum = 0;

      for (j = 1; j < i; j++) {
         if (i % j == 0) {
            sum += j;
         }
      }

      if (sum == i) {
         printf("%d\n", i);
      }
   }

   return 0;
}
