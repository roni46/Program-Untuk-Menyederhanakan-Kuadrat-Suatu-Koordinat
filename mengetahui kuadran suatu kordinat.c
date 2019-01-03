#include<iostream>
#include<stdio.h>
#include<conio.h>



int main(){
printf("PROGRAM MENGUBAH BILANGAN PECAHAN\n");
printf("BY M Achmad Sahroni NIM 311620782\n");
printf("KAMPUS PELITA BANGSA. TEKNIK INFORMATIKA\n\n");

            int x,y;

            printf("Program Fungsi Untuk Mengetahui Kuadran Suatu Koordinat\n\n");

            printf("Masukan Nilai Koordinat X = ");

            scanf("%i", &x);

            printf("Masukan Nilai Koordinat Y = ");

            scanf("%i", &y);



            if(x>0&&y>0)

                printf("Kuadran I ");

            if(x>0&&y<0)

                printf("Kuadran II ");

            if(x<0&&y<0)

                printf("Kuadran III ");

            if(x==0&&y==0)

                printf("Kuadran Pusat ");

                return 0;



}

