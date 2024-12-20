#include <stdio.h>

int main() {
    int n1, n2;

    scanf("%d %d", &n1, &n2);

    if (n1 != n2) {
        printf("Jumlah tidak sama\n");
        return 0;
    }

    int matriks1[n2], matriks2[n2];

    for (int i = 0; i < n2; i++) {
        scanf("%d", &matriks1[i]);
    }

    for (int i = 0; i < n2; i++) {
        scanf("%d", &matriks2[i]);
    }

    if (sizeof(matriks1) / sizeof(matriks1[0]) != n2 || sizeof(matriks2) / sizeof(matriks2[0]) != n2) {
        printf("Jumlah tidak sama\n");
    } else {
        for (int i = 0; i < n2; i++) {
            printf("%d ", matriks1[i] * matriks2[i]);
        }
        printf("\n");
    }

    return 0;
}
