#include <stdio.h>

int main() {
    int nilai;

    printf("Masukkan nilai (0-100): ");
    scanf("%d", &nilai);

    if (nilai >= 80) {
        printf("Nilai Anda: A\n");
    } else if (nilai >= 70) {
        printf("Nilai Anda: B\n");
    } else if (nilai >= 60) {
        printf("Nilai Anda: C\n");
    } else if (nilai >= 50) {
        printf("Nilai Anda: D\n");
    } else {
        printf("Nilai Anda: E\n");
    }

    return 0;
}