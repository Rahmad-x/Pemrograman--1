#include <stdio.h>
int main(){
    int ke1,ke2,i,j;
    printf("masukan angka pertama : ");
    scanf("%d",&ke1);
    printf("masukan angka Ke-dua : ");
    scanf("%d",&ke2);

    if(ke1<ke2){
    for(j=ke2;ke1<=j;){ 
        printf(" %d",ke1);
        ke1++;
        for(i==ke1;ke2>=i;){
            printf(" %d ",ke2);
            ke2--;
            break;       
        }printf("-");
    }
    }else{
     for(i=ke2;ke1>=i;){
            printf(" %d ",ke1);
            ke1--;
     for(j==ke1;ke2<=j;){ 
        printf("%d",ke2);
        ke2++;
        printf(" -");
            break;      
        }
    }   
    }
}