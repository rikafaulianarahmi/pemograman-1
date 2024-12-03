#include <stdio.h>

int main() {
    int n, kelipatan, total = 0;
    scanf("%d %d", &n, &kelipatan);

    for (int i = 1; i <= n; i++) {
        int baris_total = 0;
        for (int j = i; j >= 1; j--) {
            baris_total += j * kelipatan;
            printf("(%d * %d) ", j, kelipatan);
            if (j > 1) printf("+ ");
        }
        printf("= %d\n", baris_total);
        total += baris_total;
    }
    printf("%d\n", total);

    return 0;
}
