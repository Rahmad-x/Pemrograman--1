#include <stdio.h>
int main(){
    float r,t,v,l,k,phi=3.14;
    printf("Masukan nilai jari-jari tabung :");
    scanf("%f",&r);
    printf("Masukan nilai tinggi tabung    :");
    scanf("%f",&t);

    v=phi*r*r*t;
    l=2*phi*r*(r+t);
    k=2*phi*r;
printf("Volume = %.2f\nLuas = %.2f\nKeliling = %.2f",v,l,k);
}