#include <stdio.h>

double share_bill(int total_money, int total_people) {
  return ((double)total_money / (double)total_people);
}

int main() {
  int total_money, total_people;
  printf("Nhap vao so tien: ");
  scanf("%d", &total_money);
  printf("Nhap vao so nguoi: ");
  scanf("%d", &total_people);

  double moi_nguoi_can_tra = share_bill(total_money, total_people);
  printf("So tien moi nguoi can tra = %lf\n", moi_nguoi_can_tra);

  return 0;
}
