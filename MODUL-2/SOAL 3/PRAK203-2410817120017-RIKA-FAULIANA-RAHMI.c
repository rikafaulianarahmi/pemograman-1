#include <stdio.h>

int main() {
    int a, b, i, j, x, y;
    float hasil;

    // Input dari user
    printf("Masukkan a: ");
    scanf("%d", &a);
    printf("Masukkan b: ");
    scanf("%d", &b);
    printf("Masukkan i: ");
    scanf("%d", &i);
    printf("Masukkan j: ");
    scanf("%d", &j);
    printf("Masukkan x: ");
    scanf("%d", &x);
    printf("Masukkan y: ");
    scanf("%d", &y);

    // Menghitung hasil dengan urutan operasi yang benar
    hasil = (((float)(a - b) * i) / j) - (float)x - (float)y;

    // Menampilkan hasil dengan ketelitian 3 angka di belakang koma
    printf("Hasil: %.3f\n", hasil);

    return 0;
}