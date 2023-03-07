/*Nama File 	: JumDeret1.c*/
/*Deskripsi 	: Menghitung dan menampilkan jumlah deret bilangan yang ditentukan dari n */
/*Pembuat   	: 24060120130062 - Rizal Zeri Subakti*/
/*Tgl Pembuatan	: 20:17 - 22 Maret 2021*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main(){
    /*Kamus*/
    int n;
    int i;
    int jml;

    /*Algoritma*/
    printf("-------Program JumDeret1--------\n\n");
    printf("Masukkan nilai n = ");
    scanf("%d", &n);

    if(n>0){
        jml = 0;
        for (i = 1; i <= n; i++){
            jml = jml + i;
        }
        printf("Jumlah deret bilangannya = %d", jml);
    }
    else{
        printf("Masukkan nilai n harus positif ");
    }


    return 0;
}

