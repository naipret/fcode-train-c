#include <stdio.h>

int square(int n) { return (n * n); }

int main() {
  int n;
  printf("Nhap vao n: ");
  scanf("%d", &n);

  int binh_phuong = square(n);
  printf("Binh phuong = %d\n", binh_phuong);

  return 0;
}
