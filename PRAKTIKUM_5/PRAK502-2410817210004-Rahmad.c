#include <stdio.h>
#include <math.h>
int hitung(int nilai1, int nilai2){
//Lengkapi Function ini

if ((nilai1-nilai2)<0){

return -(nilai1-nilai2) ;
}
return (nilai1-nilai2) ;
}
int mutlak(int angka){
//Lengkapi Function ini
return fabs(angka);
}
int main(){
int a,b,c,d;
scanf("%d",&a);
scanf("%d",&c);
scanf("%d",&b);
scanf("%d",&d);
int Hasil = hitung(a,b) + hitung(c,d);
printf("%d",mutlak(Hasil));
return 0;
}