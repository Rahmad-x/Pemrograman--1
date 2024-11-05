#include <stdio.h>
int main (){
float pertama,kedua,hasil;
printf("Masukan Nilai Pertama: ");
scanf("%f",& pertama);
printf("Masukan Nilai Ke-dua: ");
scanf("%f",& kedua);
hasil=pertama+kedua;
printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.2f\"%.2f",pertama,kedua,hasil);
}