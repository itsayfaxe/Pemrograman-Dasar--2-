#include <stdio.h>
int main (){
    float Pertama, Kedua;
    printf("Masukkan Nilai Pertama: ");
    scanf("%f", &Pertama);
    printf("Masukkan Nilai Kedua: ");
    scanf("%f", &Kedua);

    float Hasil;
    Hasil = Pertama + Kedua;
    printf("Hasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%.2f\"\n", Pertama, Kedua, Hasil);

    return 0;
}