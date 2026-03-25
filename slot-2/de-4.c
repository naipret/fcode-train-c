#include <stdio.h>

int main() {
  int n;
  printf("Nhap vao chieu cao cua tam giac vuong: ");
  scanf("%d", &n);

  for (int hang = 1; hang < (n + 1); hang++) {
    for (int cot = 1; cot < (hang + 1); cot++) {
      printf("* ");
    }
    printf("\n");
  }

  return 0;
}
