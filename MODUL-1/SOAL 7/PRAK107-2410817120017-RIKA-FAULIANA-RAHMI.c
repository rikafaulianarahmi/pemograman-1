#include <stdio.h>

int main() {
    // Mendefinisikan panjang sisi segitiga
    int sisi1 = 4;
    int sisi2 = 5;
    int sisi3 = 7;
    
    // Menghitung keliling
    int keliling = sisi1 + sisi2 + sisi3;
    
    // Harga per meter
    int hargaPerMeter = 85000;
    
    // Menghitung total biaya
    int totalBiaya = keliling * hargaPerMeter;

    // Menampilkan hasil
    printf("Diketahui : \n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", sisi1, sisi2, sisi3);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", keliling);
    printf("Harga tanah Per Meter adalah %d\n", hargaPerMeter);
    printf("Jawaban :  \n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d\n", totalBiaya);
    
    return 0;
}
