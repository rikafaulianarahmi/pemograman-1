#include <stdio.h>

void main() {
    int batas;

    scanf("%d", &batas);

    for (int i = 1; i <= batas; i++) {
        if (i % 2 != 0) { 
            printf("%d ", i);
        }
    }

    printf("\n");

    for (int i = batas; i >= 1; i--) {
        if (i % 2 == 0) { 
            printf("%d ", i);
        }
    }

    printf("\n");
}

