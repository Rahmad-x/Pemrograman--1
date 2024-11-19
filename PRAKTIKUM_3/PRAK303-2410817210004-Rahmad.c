#include <stdio.h>

int main() {
    int nilai;
    
    printf("Masukkan bilangan : ");
    scanf("%d", &nilai);
    if (nilai<0){
        printf("Negatif");
    }else if (nilai>0){
        printf("Positif");
    }else {printf("nol");
    }
}
