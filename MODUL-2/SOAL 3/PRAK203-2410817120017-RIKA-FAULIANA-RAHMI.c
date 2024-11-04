#include <stdio.h>

int main() {
    float a, b, i, j, x, y;

    // Membaca input dari pengguna
    scanf("%f %f %f %f %f %f", &a, &b, &i, &j, &x, &y);

    // Melakukan perhitungan
    float hasil = (((a - b) * i) / j) - (x + y);

    // Menampilkan hasil dengan format 3 desimal
    printf("%.3f\n", hasil);

    return 0;
}