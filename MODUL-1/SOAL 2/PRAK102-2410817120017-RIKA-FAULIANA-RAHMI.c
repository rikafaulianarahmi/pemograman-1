#include <stdio.h>

int main() {
    // Mendefinisikan variabel
    int a = 4;
    int b = 8;
    int c = 3;

    // Menampilkan nilai variabel
    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel c bernilai %d\n", c);
    
    // Menghitung hasil dari a dikali b dibagi c
    float hasil = (float) (a * b) / c;

    // Menampilkan hasil
    printf("Hasil dari a dikali b dibagi c adalah %.6f\n", hasil);
    
    return 0;
}
