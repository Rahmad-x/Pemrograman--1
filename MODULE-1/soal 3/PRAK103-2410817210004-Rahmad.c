#include <stdio.h>
int main(){
    float a= 9.0f,y=7.0f,x=10.0f,b=6.0f;
    float hasil;
    hasil=(a+b)*x/y;
    printf("variabel a bernilai %.0f\nvariabel b bernilai %.0f\nvariabel x bernilai %.0f\nvariabel y bernilai %.0f\nhasil dari a ditambah b dikali x dibagi y adalah %4.2f",a,b,x,y,hasil);
}