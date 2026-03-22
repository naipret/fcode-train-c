#include <stdio.h>

int tong_cac_chu_so(int n) {
  int tong = 0;

  while (n > 0) {
    tong += n % 10;
    n /= 10;
  }

  return tong;
}

int main() {
  int n;
  printf("Nhap vao mot so nguyen n: ");
  scanf("%d", &n);

  int tong = tong_cac_chu_so(n);
  printf("Tong = %d", tong);

  return 0;
}
