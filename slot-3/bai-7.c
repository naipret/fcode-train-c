#include <stdio.h>

int is_even(int n) {
  if (n % 2 == 0) {
    return 1;
  }
  return 0;
}

int main() {
  int range = 20;
  for (int i = 1; i <= range; i++) {
    if (is_even(i) != 0) {
      printf("%d\n", i);
    }
  }

  return 0;
}
