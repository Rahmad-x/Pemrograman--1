#include <stdio.h>
int main(){
int a=4,b=8,c=3;
int x=a==b?1:0,y=b>c?1:0,z=a!=c?1:0;
printf("Variabel a bernilai %d\n",a);
printf("Variabel b bernilai %d\n",b);
printf("Variabel c bernilai %d\n",c);
printf("Apakah a sama dengan b? jawabannya adalah %d\n",x);
printf("Apakah b lebih besar c? jawabannya adalah %d\n",y);
printf("Apakah a tidak sama dengan c? jawabannya adalah %d\n",z);
}