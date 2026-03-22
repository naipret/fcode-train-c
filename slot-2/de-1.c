#include <stdbool.h>
#include <stdio.h>

bool la_tam_giac(double a, double b, double c) {
  if (a + b > c && a + c > b && b + c > a) {
    return true;
  }
  return false;
}

bool la_tam_giac_deu(double a, double b, double c) {
  if ((a == b) && (a == c) && (b == c)) {
    return true;
  }
  return false;
}

bool la_tam_giac_can(double a, double b, double c) {
  if ((a == b) || (a == c) || (b == c)) {
    return true;
  }
  return false;
}

bool la_tam_giac_vuong(double a, double b, double c) {
  if (((a * a) == (b * b) + (c * c)) || ((b * b) == (a * a) + (c * c)) ||
      ((c * c) == (a * a) + (b * b))) {
    return true;
  }
  return false;
}

bool la_tam_giac_tu(double a, double b, double c) {
  if (((a * a) > (b * b) + (c * c)) || ((b * b) > (a * a) + (c * c)) ||
      ((c * c) > (a * a) + (b * b))) {
    return true;
  }
  return false;
}

bool la_tam_giac_nhon(double a, double b, double c) {
  if (((a * a) < (b * b) + (c * c)) || ((b * b) < (a * a) + (c * c)) ||
      ((c * c) < (a * a) + (b * b))) {
    return true;
  }
  return false;
}

int main() {
  double a, b, c;
  printf("Nhap vao 3 canh cua tam giac: ");
  scanf("%lf%lf%lf", &a, &b, &c);

  if (la_tam_giac(a, b, c)) {
    if (la_tam_giac_vuong(a, b, c) && la_tam_giac_can(a, b, c)) {
      printf("La tam giac vuong can!\n");
    } else if (la_tam_giac_deu(a, b, c)) {
      printf("La tam giac deu!\n");
    } else if (la_tam_giac_can(a, b, c)) {
      printf("La tam giac can!\n");
    } else if (la_tam_giac_vuong(a, b, c)) {
      printf("La tam giac vuong!\n");
    } else if (la_tam_giac_tu(a, b, c)) {
      printf("La tam giac tu!\n");
    } else if (la_tam_giac_nhon(a, b, c)) {
      printf("La tam giac nhon!\n");
    } else {
      printf("La tam giac thuong!\n");
    }
  } else {
    printf("Khong phai la tam giac!\n");
  }

  return 0;
}
