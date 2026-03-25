#include <stdio.h>

void get_student(char name[], char student_code[]) {
  printf("Nhap vao ho va ten: ");
  scanf(" %[^\n]", name);
  printf("Nhap vao ma so sinh vien: ");
  scanf(" %[^\n]", student_code);
  return;
}

void print_student(char name[], char student_code[]) {
  printf("Name: %s - Student Code: %s\n", name, student_code);
  return;
}

int main() {
  char name[44], student_code[9];

  get_student(name, student_code);

  print_student(name, student_code);

  return 0;
}
