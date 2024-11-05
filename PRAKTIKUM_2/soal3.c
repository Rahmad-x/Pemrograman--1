#include <stdio.h>
int main (){
float a,b,c,d,e,f,hasil;
printf("Masukan Nilai Pertama   : ");
scanf("%f",& a);
printf("Masukan Nilai Ke-dua    : ");
scanf("%f",& b);
printf("Masukan Nilai Ke-tiga   : ");
scanf("%f",& c);
printf("Masukan Nilai Ke-empat  : ");
scanf("%f",& d);
printf("Masukan Nilai Ke-lima   : ");
scanf("%f",& e);
printf("Masukan Nilai Ke-enam   : ");
scanf("%f",& f);
hasil=(a-b)*(c/d)-(e+f);
printf("Hasil dari (%.0f-%.0f) dikali dengan (%.0f:%.0f) dikurang dengan (%.0f+%.0f) adalah %.3f",a,b,c,d,e,f,hasil);
}