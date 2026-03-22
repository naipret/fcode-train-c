#include <stdio.h>

int main() {
  int n;
  printf("Nhap vao n so phan tu cua mang: ");
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int so_lon_nhat = arr[0];
  int so_nho_nhat = arr[0];
  int tong_cua_mang = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] > so_lon_nhat) {
      so_lon_nhat = arr[i];
    }
    if (arr[i] < so_nho_nhat) {
      so_nho_nhat = arr[i];
    }
    tong_cua_mang += arr[i];
  }

  double trung_binh_cong = (double)tong_cua_mang / (double)n;
  printf("So lon nhat: %d\n", so_lon_nhat);
  printf("So nho nhat: %d\n", so_nho_nhat);
  printf("Trung binh cong: %lf\n", trung_binh_cong);

  return 0;
}
