#include <stdio.h>

int main() {
    int pilihan;
    float a, b;

    do {
        printf("Pilih program:\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit\n");
        printf("Masukkan Pilihan: ");
        scanf("%d", &pilihan);

        if (pilihan >= 1 && pilihan <= 4) {
            printf("Masukkan nilai pertama: ");
            scanf("%f", &a);
            printf("Masukkan nilai kedua: ");
            scanf("%f", &b);

            switch (pilihan) {
                case 1: printf("Hasil Penjumlahan: %.2f\n", a + b); break;
                case 2: printf("Hasil Pengurangan: %.2f\n", a - b); break;
                case 3: printf("Hasil Perkalian: %.2f\n", a * b); break;
                case 4: 
                    if (b != 0) printf("Hasil Pembagian: %.2f\n", a / b);
                    else printf("Error: Pembagian dengan nol tidak valid!\n");
                    break;
            }
        } else if (pilihan != 5) {
            printf("Input anda salah, silahkan coba lagi\n");
        }
    } while (pilihan != 5);

    printf("Terimakasih, telah menggunakan kalkulator RIKAFAULIANARAHMI\n");
    return 0;
}
