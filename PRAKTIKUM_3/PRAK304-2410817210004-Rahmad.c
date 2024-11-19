#include <stdio.h>

int main() {
    int a;
    
    printf("Masukkan bilangan : ");
    scanf("%d", &a);
    if(a==0){
    printf("NOL");
    }else if(a>=1&&a<=9){
    printf("satuan");
    }else if(a>=11&&a<=19){
    printf("Belasan");
    }else if(a>=20&&a<=99){
    printf("Puluhan");
    }else{
    printf("Anda menginput melebihi batas limit bilangan");
    }
}
