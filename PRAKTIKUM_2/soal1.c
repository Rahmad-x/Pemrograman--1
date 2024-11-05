#include <stdio.h>

struct Biodata {
    char nama[50];
    char nim[20];
    char kelasParalel[10];
    char tempat[30];
    char tanggalLahir[15];
    char alamat[100];
    char hobby[50];
    char noHP[15];
};

int main() {
    struct Biodata data;
    char input[100];  

    printf("Masukkan Nama                       : ");
    fgets(input, sizeof(input), stdin);
    sscanf(input,"%[^\n]", data.nama);  

    printf("Masukkan NIM                        : ");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%[0-9]", data.nim);

    printf("Masukkan Kelas Paralel              : ");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%[^\n]", data.kelasParalel);

    printf("Masukkan TTL format kota/dd-mm-yyyy : ");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%[^\n]", data.tempat);

    printf("Masukkan Alamat                     : ");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%[^\n]", data.alamat);

    printf("Masukkan Hobby                      : ");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%[^\n]", data.hobby);

    printf("Masukkan No. HP                     : ");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%[^\n]", data.noHP);

    
    printf("\n      --- Biodata Anda ---        \n");
    printf("Nama            : %s\n", data.nama);
    printf("NIM             : %s\n", data.nim);
    printf("Kelas Paralel   : %s\n", data.kelasParalel);
    printf("TTL             : %s\n", data.tempat);
    printf("Alamat          : %s\n", data.alamat);
    printf("Hobby           : %s\n", data.hobby);
    printf("No. HP          : %s\n", data.noHP);

    return 0;
}
