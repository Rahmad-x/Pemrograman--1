#include <stdio.h>
int main(){
    int n1,n2;
    scanf("%d",&n1);
    scanf("%d",&n2);

    if(n1!=n2){
        printf("Jumlah tidak sama");
    }else{
    int matriks[1][n2=n1];
        for(int i=0;i<1;i++){
        for(int j=0;j<n1;j++){
            scanf("%d",&matriks[i][j]);
        }
        }
        for(int i=1;i<2;i++){
        for(int j=0;j<n2;j++){
            scanf("%d",&matriks[i][j]);
        }
        }
        int hasil[n1=n2];
        for(int j=0;j<n2;j++){
        for(int i=0;i<1;i++){
        hasil[j]=matriks[i][j]*matriks[i+1][j];
        }
        }
        for(int i=0;i<n1;i++){
            printf("%d ",hasil[i]);
        }
        
        
        
    }

}