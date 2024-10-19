#include <stdio.h>
#include <math.h>
int main(){
    int alas=5,tinggi=12,miring=alas*alas+tinggi*tinggi,hasil=sqrt(miring),keliling=alas+hasil+tinggi,luas=(alas*tinggi)/2;
    
    printf("Diketahui :\nAlas = %d cm\nTinggi = %d cm\n\n",alas,tinggi);
    printf("Jawab :\nSisi A = %d cm\nSisi B = %d cm\nSisi C = %d cm\nKeliling = %d cm\nluas = %d cm",alas,hasil,tinggi,keliling,luas);

}