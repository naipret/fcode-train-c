#include <stdio.h>

float average(float a, float b, float c);
void print_grade(float grade);

int main() {
  float a, b, c;
  printf("Nhap vao diem cua 3 mon: ");
  scanf("%f %f %f", &a, &b, &c);

  float grade = average(a, b, c);
  print_grade(grade);

  return 0;
}

float average(float a, float b, float c) { return ((a + b + c) / (float)3); }

void print_grade(float grade) {
  printf("Diem trung binh = %f - Xep loai: ", grade);
  if (grade >= 9.0) {
    printf("Xuat sac\n");
  } else if (grade >= 8.0) {
    printf("Gioi\n");
  } else if (grade >= 6.5) {
    printf("Kha\n");
  } else if (grade >= 5.0) {
    printf("Trung binh\n");
  } else {
    printf("Yeu\n");
  }
  return;
}
