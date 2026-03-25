#include <stdio.h>

float calculate_bill(int kwh) {
  float amount = 0;
  if (kwh <= 50) {
    amount = (float)(kwh * 1500);
  } else if (kwh <= 100) {
    amount = (float)((50 * 1500) + ((kwh - 50) * 2000));
  } else {
    amount = (float)((50 * 1500) + (50 * 2000) + ((kwh - 100) * 2500));
  }
  return amount;
}

void print_bill(float amount) {
  printf("Tong so tien can phai tra = %f\n", amount);
  return;
}

int main() {
  int kwh;
  printf("Nhap vao so dien tieu thu: ");
  scanf("%d", &kwh);

  float amount = calculate_bill(kwh);
  print_bill(amount);

  return 0;
}
