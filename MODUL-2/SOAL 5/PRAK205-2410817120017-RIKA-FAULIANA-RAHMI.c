#include <stdio.h>
#include <math.h>

void hitung_segitiga(float a, float b) {
    // Menghitung alas menggunakan teorema Pythagoras
    float c = sqrt(b * b - a * a);
    
    // Menghitung keliling
    float keliling = a + b + c;
    
    // Menghitung luas
    float luas = 0.5 * c * a;
    
    // Menampilkan hasil
    printf("Alas = %.0f cm\n", c);
    printf("Tinggi = %.0f cm\n", a);
    printf("Keliling = %.0f cm\n", keliling);
    printf("Luas = %.0f cm^2\n", luas);
}

int main() {
    float a, b;
    
    printf("Masukkan panjang A (tinggi): ");
    scanf("%f", &a);
    printf("Masukkan panjang B (sisi miring): ");
    scanf("%f", &b);
    
    // Memanggil fungsi untuk menghitung segitiga
    hitung_segitiga(a, b);

    return 0;
}
