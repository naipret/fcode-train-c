#include <stdio.h>

void updatePrice(float *price) {
  *price = *price * 1.1F;
  return;
}

int main() {
  float price;
  scanf("%f", &price);

  updatePrice(&price);

  printf("%.2f\n", price);

  return 0;
}
