#include <stdio.h>

int main(){
int input1,i;
char input2;
    printf("Masukan bilagan kelipata : ");
    scanf("%d",&input1);
    printf("Masukan bilagan simbol yang ingin ditampilkan : ");
    scanf(" %c",&input2);
 
    for(i=1;i<=50;i++){
    if(i%input1==0){
    printf("%c ", input2);
    } else {
    printf("%d ", i);
}
}   
}

