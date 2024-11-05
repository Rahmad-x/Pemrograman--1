#include <stdio.h>
#include <math.h>
int main(){
    int a,b,alas,keliling,luas;
    printf("masukan sisi tegak segitiga : ");
    scanf("%d",&a);
    printf("masukan sisi miring segitiga: ");
    scanf("%d",&b);
    alas=sqrt((b*b)-(a*a));
    keliling=a+b+alas;
    luas=0.5*alas*a;
    printf("Alas = %d cm\nTinggi = %d cm\nKeliling = %d cm\nLuas = %d cm",alas,a,keliling,luas);
}