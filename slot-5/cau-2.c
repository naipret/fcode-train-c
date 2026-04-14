#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
  return;
}

int main() {
  int a, b;
  scanf("%d%d", &a, &b);

  swap(&a, &b);

  printf("a = %d\n", a);
  printf("b = %d\n", b);

  return 0;
}
