#include <stdio.h>

int main() {
    int N, kelipatan;
    
    printf("Masukkan N: ");
    scanf("%d", &N);
    
    printf("Masukkan kelipatan: ");
    scanf("%d", &kelipatan);

    int hasil = 0,hasilakhir=0;
    for (int i = 1; i <= N; i++) {
       
        hasil += i * kelipatan;
        hasilakhir+= hasil;
        printf("(%d*%d)", i, kelipatan);
        for(int j=i-1;j>0;j--){
            printf("+(%d*%d)",j,kelipatan);
            
        }
    printf(" = %d\n", hasil);

 
    }printf("%d",hasilakhir);

    

}
