#include <stdbool.h>
#include <stdio.h>

const int NAM_HIEN_TAI = 2026;

bool la_gen_x(int nam_sinh) {
  if (nam_sinh >= 1965 && nam_sinh <= 1980) {
    return true;
  }
  return false;
}

bool la_gen_y(int nam_sinh) {
  if (nam_sinh >= 1981 && nam_sinh <= 1996) {
    return true;
  }
  return false;
}

bool la_gen_z(int nam_sinh) {
  if (nam_sinh >= 1997 && nam_sinh <= 2012) {
    return true;
  }
  return false;
}

int main() {
  int nam_sinh;
  printf("Nhap vao nam sinh: ");
  scanf("%d", &nam_sinh);

  int so_tuoi = NAM_HIEN_TAI - nam_sinh;
  printf("%d tuoi\n", so_tuoi);

  if (la_gen_x(nam_sinh)) {
    printf("La gen X!\n");
  } else if (la_gen_y(nam_sinh)) {
    printf("La gen Y!\n");
  } else if (la_gen_z(nam_sinh)) {
    printf("La gen Z!\n");
  } else {
    printf("Khac!\n");
  }

  return 0;
}
