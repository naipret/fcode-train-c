#include <stdio.h>

int count = 0;

void increment() {
  count++;
  return;
}

int main() {
  int range = 5;
  for (int i = 1; i <= range; i++) {
    printf("Lan goi ham thu %d:\n", i);
    printf("Truoc khi goi: count = %d\n", count);
    increment();
    printf("Sau khi goi  : count = %d\n", count);
  }

  return 0;
}
