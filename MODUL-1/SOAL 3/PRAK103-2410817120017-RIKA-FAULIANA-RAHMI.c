#include <stdio.h>

int main() {
    // Mendefinisikan variabel
    int a = 9;
    int b = 6;
    int x = 10;
    int y = 7;

    // Menampilkan nilai variabel
    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel x bernilai %d\n", x);
    printf("Variabel y bernilai %d\n", y);
    
    // Menghitung hasil dari a ditambah b dikali x dibagi y
    float hasil = (float) (a + b) * x / y;

    // Menampilkan hasil
    printf("Hasil dari a ditambah b dikali x dan dibagi y adalah %.2f\n", hasil);
    
    return 0;
}
