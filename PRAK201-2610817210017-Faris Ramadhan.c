#include <stdio.h>

int main() {
    char Nama[50], NIM [14], TTL[30], Alamat[100], Hobby[50], HP[20];
    int Kelas;

    printf("Masukkan nama Anda: ");
    scanf(" %[^\n]", Nama);

    printf("Masukkan NIM Anda: ");
    scanf(" %[^\n]", NIM);

    printf("Masukkan kelas paralel Anda: ");
    scanf("%d", &Kelas);

    printf("Masukkan tempat/tanggal lahir Anda: ");
    scanf(" %[^\n]", TTL);

    printf("Masukkan alamat Anda: ");
    scanf(" %[^\n]", Alamat);

    printf("Masukkan hobby Anda: ");
    scanf(" %[^\n]", Hobby);

    printf("Masukkan nomor HP Anda: ");
    scanf(" %[^\n]", HP);

    printf("Nama                     : %s\n", Nama);
    printf("NIM                      : %s\n", NIM);
    printf("Kelas Paralel            : %d\n", Kelas);
    printf("Tempat/Tanggal lahir     : %s\n", TTL);
    printf("Alamat                   : %s\n", Alamat);
    printf("Hobby                    : %s\n", Hobby);
    printf("No. HP                   : %s\n", HP);

    return 0;
}
