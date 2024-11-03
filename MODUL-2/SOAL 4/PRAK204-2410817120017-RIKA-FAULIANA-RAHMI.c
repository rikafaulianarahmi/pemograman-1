#include <stdio.h>

#define PI 22.0 / 7.0  // Menggunakan pendekatan pi sebagai 22/7

void hitung_tabung(float r, float t) {
    float volume = PI * r * r * t;
    float luas = 2 * PI * r * (r + t);
    float keliling = 2 * PI * r;

    // Tampilkan hasil dengan 2 angka di belakang koma
    printf("Volume = %.2f\n", volume);
    printf("Luas = %.2f\n", luas);
    printf("Keliling = %.2f\n", keliling);
}

int main() {
    float r, t;

    printf("Masukkan jari-jari: ");
    scanf("%f", &r);
    printf("Masukkan tinggi: ");
    scanf("%f", &t);

    // Hitung dan tampilkan hasil
    hitung_tabung(r, t);

    return 0;
}
