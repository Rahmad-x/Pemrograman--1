#include <stdio.h>

int main() {
    int a;
    
    printf("Masukkan waktu dalam format detik : ");
    scanf("%d", &a);
    if(a>=86400){
        int hari = a/86400;
         int jam=(a%86400)/3600, menit=((a%86400)%3600)/60, detik =a%60;
        printf("%d hari : %d jam : %d menit : %d detik",hari,jam,menit,detik);      
        }
    else {
         int jam=a/3600, menit=(a%3600)/60, detik =a%6;
         printf("%d jam : %d menit : %d detik ",jam,menit,detik);
    }
} 