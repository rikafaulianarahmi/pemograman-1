#include <stdio.h>

int main() {
    // Mendefinisikan jumlah pasukan dan jumlah pahlawan
    int jumlahPasukan = 958730;
    int jumlahPahlawan = 5;

    // Menghitung jumlah pasukan yang harus dikalahkan setiap pahlawan
    int pasukanPerPahlawan = jumlahPasukan / jumlahPahlawan;

    // Menampilkan hasil sesuai format yang diminta
    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", jumlahPasukan);
    printf("Jumlah pahlawan = %d\n", jumlahPahlawan);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan\n", pasukanPerPahlawan);

    return 0;
}
