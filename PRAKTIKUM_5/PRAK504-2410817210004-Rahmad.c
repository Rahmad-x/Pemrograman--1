#include <stdio.h>
int reverse(int a){
// Lengkapi Function ini
 int remainder,angka=a,rev_Num=0;
 while (angka != 0){
         remainder = angka % 10;

        rev_Num = rev_Num * 10 + remainder;

         angka = angka/10;
 }
 return rev_Num ;
}
int main() {
int A, B;
scanf("%d %d",&A,&B);
A=reverse(A);
B=reverse(B);
int C = A+B;
printf("%d",reverse(C));
}