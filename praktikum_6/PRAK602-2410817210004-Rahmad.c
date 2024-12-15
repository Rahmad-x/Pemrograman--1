#include <stdio.h>
int main(){
    int batas;
    scanf("%d",&batas);
    int bilangan[batas];
    int hasilkali[batas];
    for(int i=0;i<batas;i++){
        scanf("%d",&bilangan[i]);
    }
    for(int i =0;i<batas;i++){
    hasilkali[i]=bilangan[i]*(i+1);
    }
    for(int i =0;i<batas;i++){
    printf("%d ",hasilkali[i]);
    }
}