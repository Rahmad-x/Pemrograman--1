#include <stdio.h>
#include <string.h>
int main(){
    char dimiliki[100];
    char diterima[100];

    scanf("%[^\n]%*c",&dimiliki);
    scanf("%[^\n]%*c",&diterima);

    if(strlen(dimiliki)==strlen(diterima)){
        int pagar=0;
        int bintang=0;
        for (int i = 0; i < strlen(dimiliki); i++) {
            if (dimiliki[i]==' ' && diterima[i]==' '){

            continue;
            }
            if (dimiliki[i] == diterima[i]) {
                printf("*");
            bintang ++;
            }else{
               printf("#");
               pagar++;
            }
        }
        printf("\n");
        printf("* = %d \n # = %d\n",bintang,pagar);
        if(bintang>=pagar){
            printf("pesan asli");
        }else{
            printf("pesan palsu");
        }
    }
    else{
        printf("Panjang kalimat berbeda, pesan palsu");
    }
}