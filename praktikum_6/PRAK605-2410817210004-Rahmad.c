#include <stdio.h>
int main(){
    int ordo ;
    //meminta user memasukan inputan ordo
    scanf("%d",&ordo);

    int matriks_A[ordo][ordo];
    int matriks_B[ordo][ordo];
    //ini meminta user menginput isi dari matriks A
    for(int i= 0;i<ordo;i++){
        for(int j= 0;j<ordo;j++){
        scanf("%d",&matriks_A[i][j]);
        }
    }
    //ini meminta user menginput isi dari matriks B
    for(int i= 0;i<ordo;i++){
        for(int j= 0;j<ordo;j++){
        scanf("%d",&matriks_B[i][j]);
        }
    }
    //perkalian matriks
    int hasil[ordo][ordo];
 
    for(int i= 0;i<ordo;i++){
        for(int j= 0;j<ordo;j++){
            hasil[i][j]=0;
            for(int k=0;k<ordo;k++){
        hasil[i][j]+=matriks_A[i][k]*matriks_B[k][j];
        }
        }
    } 
    for(int i= 0;i<ordo;i++){
        for(int j= 0;j<ordo;j++){
           printf("%d ",hasil[i][j]);
        }printf("\n");
    } 
}   