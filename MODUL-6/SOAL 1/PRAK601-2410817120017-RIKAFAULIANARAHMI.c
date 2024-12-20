#include <stdio.h>

int main() {
  int baris, kolom;
  scanf("%d %d", &baris, &kolom);

  int data[baris][kolom];
  for (int i = 0; i < baris; i++) {
    for (int j = 0; j < kolom; j++) {
      scanf("%d", &data[i][j]);
    }
  }

  for (int i = 0; i < baris; i++) {
    for (int j = 0; j < kolom; j++) {
      printf("%d ", data[i][j]);
    }
    printf("\n");
  }

  return 0;
}
