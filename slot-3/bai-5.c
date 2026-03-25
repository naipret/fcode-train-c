#include <stdio.h>

int max(int a, int b);

int main() {
  int a, b;
  printf("Nhap vao 2 so can so sanh: ");
  scanf("%d%d", &a, &b);

  int so_lon_hon = max(a, b);
  printf("So lon hon trong 2 so = %d\n", so_lon_hon);

  return 0;
}

int max(int a, int b) {
  if (a >= b) {
    return a;
  }
  return b;
}
