#include <stdio.h>
void Biodata(int tahunlahir,char nama[],char asal[]){
int tahun_sekarang = 2020;
int usia =tahun_sekarang - tahunlahir;
printf("Perkenalkan Nama saya : %s\n", nama);
printf("Umur saya : %d tahun\n", usia);
printf("saya adalah angkatan : %d\n", tahun_sekarang);
printf("Asal saya dari : %s\n", asal);
// Lengkapi Function ini
}
int main() {
int tahunLahir;
char A[20], B[15];
scanf(" %d",&tahunLahir);
scanf(" %[^\n]%*c",&A);
scanf(" %[^\n]%*c",&B);
Biodata(tahunLahir, A, B);
return 0;
}
