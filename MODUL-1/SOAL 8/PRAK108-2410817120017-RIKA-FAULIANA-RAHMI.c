#include <stdio.h>

int main() {
    // Diketahui
    int putaran = 5;  // jumlah putaran
    float jarak_tempuh = 14.0;  // jarak tempuh dalam kilometer

    // Menghitung keliling taman
    float keliling_taman = jarak_tempuh / putaran;  // keliling taman dalam kilometer

    // Menghitung jari-jari taman menggunakan rumus keliling = 2 * pi * r
    float pi = 3.14159265359;  // nilai pi
    float jari_jari = keliling_taman / (2 * pi);  // jari-jari taman dalam kilometer

    // Menampilkan hasil
    printf("Diketahui : \n");
    printf("Pak Dengklek mengelilingi taman = %d Putaran \n", putaran);
    printf("Jarak tempuh Pak Dengklek = %.2f Kilometer \n\n", jarak_tempuh);
    printf("Jawaban : \n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", jari_jari);

    return 0;
}
