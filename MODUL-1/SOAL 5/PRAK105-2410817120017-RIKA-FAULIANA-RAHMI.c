#include <stdio.h>

int main() {
    // Mendefinisikan variabel
    int a = 9;
    int b = 5;
    int x = 8;
    int y = 8;

    // Menampilkan nilai variabel
    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel x bernilai %d\n", x);
    printf("Variabel y bernilai %d\n", y);
    
    // Menghitung sisa bagi
    int sisaBagi1 = a % b;
    int sisaBagi2 = x % y;

    // Menghitung total sisa bagi
    int totalSisaBagi = sisaBagi1 + sisaBagi2;

    // Menampilkan total sisa bagi
    printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %d\n", totalSisaBagi);
    
    return 0;
}
