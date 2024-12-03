#include <stdio.h>
int main(){
    int pilihan;
    float angka1,angka2,hasil;
   
        do {
        printf("Pilih program \n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit\n");
        printf("masukan pilihan : ");
        scanf("%d",&pilihan);
    if(pilihan>=1&&pilihan<=4){
        printf("masukan nilai pertama : ");
        scanf("%f",&angka1);
        printf("masukan nilai kedua : ");
        scanf("%f",&angka2);

    
        
    if (pilihan == 1){
        hasil=angka1+angka2;
        printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n\n",angka1,angka2,hasil);
        
    }else if(pilihan==2){
        hasil=angka1-angka2;
        printf("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f\n\n",angka1,angka2,hasil);
        

    }else if(pilihan == 3){
        hasil=angka1*angka2;
        printf("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f\n\n",angka1,angka2,hasil);
        
    }else if(pilihan == 4){
        hasil=angka1/angka2;
        printf("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f\n\n",angka1,angka2,hasil);
        
    }
    }else if(pilihan>=6){
        printf("Inputan anda salah, silahkan coba lagi\n\n");
    }
    } while (pilihan != 5);
    printf("Terimakasih, telah menggunakan kalkulator Rahmad :^)");
}