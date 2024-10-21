#include <stdio.h>
#include <math.h>

int main() {
    // Diketahui
    int alas = 5;
    int tinggi = 12;

    // Menghitung sisi C (hipotenusa)
    double sisiC = sqrt((alas * alas) + (tinggi * tinggi));

    // Menghitung keliling
    double keliling = alas + tinggi + sisiC;

    // Menghitung luas
    double luas = (alas * tinggi) / 2;

    // Output
    printf("Diketahui:\n");
    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n\n", tinggi);
    
    printf("Jawab:\n");
    printf("Sisi A = %d cm\n", alas);
    printf("Sisi B = %d cm\n", tinggi);
    printf("Sisi C = %.0f cm\n", sisiC);
    printf("Keliling = %.0f cm\n", keliling);
    printf("Luas = %.0f cm\n", luas);

    return 0;
}
