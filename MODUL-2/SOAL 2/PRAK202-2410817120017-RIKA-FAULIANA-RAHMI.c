#include <stdio.h>

void format_angka(float angka) {
    int integer_part = (int)angka;
    float decimal_part = angka - integer_part;

    if (decimal_part == 0) {
        // Jika angka adalah bilangan bulat, tampilkan tanpa desimal
        printf("%d", integer_part);
    } else if ((decimal_part * 10) == (int)(decimal_part * 10)) {
        // Jika angka memiliki satu angka desimal yang tidak nol
        printf("%.1f", angka);
    } else {
        // Jika angka memiliki lebih dari satu angka desimal
        printf("%.2f", angka);
    }
}


int main() {
    float nilai1, nilai2, hasil;

    // Input nilai pertama
    printf("Masukkan Nilai Pertama: ");
    scanf("%f", &nilai1);

    // Input nilai kedua
    printf("Masukkan Nilai Kedua: ");
    scanf("%f", &nilai2);

    // Menghitung hasil penjumlahan
    hasil = nilai1 + nilai2;

    // Output dengan format yang sesuai
    printf("Hasil dari penjumlahan nilai pertama \"");
    format_angka(nilai1);
    printf("\" dan nilai kedua \"");
    format_angka(nilai2);
    printf("\" adalah \"%.2f\"\n", hasil);  // Hasil selalu dua angka di belakang koma

    return 0;
}

