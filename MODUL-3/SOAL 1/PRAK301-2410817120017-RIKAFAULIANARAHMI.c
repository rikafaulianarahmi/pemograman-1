#include <stdio.h>

int main() {
  int a, b, c;

  printf("Masukkan 3 angka (dipisahkan spasi): ");
  scanf("%d %d %d", &a, &b, &c);

  if (a > b) {
    int temp = a;
    a = b;
    b = temp;
  }

  if (a > c) {
    int temp = a;
    a = c;
    c = temp;
  }

  if (b > c) {
    int temp = b;
    b = c;
    c = temp;
  }

  printf("Angka terurut: %d %d %d\n", a, b, c);

  return 0;
}