#include <stdio.h>
int main(){
    int a=400000,b=350000,diskon_a,diskon_b;
    diskon_a=a-a*13/100;
    diskon_b=b-b*21/100;
    float c=0.13,d=0.21;
    printf("Harga sepatu A adalah %d\nHarga sepatu B adalah %d\nSepatu A mendapat diskon %.0f%% sehingga harganya menjadi %d\nSepatu B mendapat diskon %.0f%% sehingga harganya menjadi %d\n",a,b,c*100,diskon_a,d*100,diskon_b);

}