#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
  return;
}

void reverse(int *arr, int n) {
  int *begin = &(arr[0]);
  int *end = &(arr[n - 1]);
  while (begin < end) {
    swap(begin, end);
    begin++;
    end--;
  }
}

int main() {
  int n;
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &(arr[i]));
  }

  reverse(arr, n);

  for (int i = 0; i < n; i++) {
    printf("%d ", (arr[i]));
  }
  printf("\n");

  return 0;
}
