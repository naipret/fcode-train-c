#include <stdio.h>

void splitEvenOdd(int *arr, int n, int *even, int *evenCount, int *odd,
                  int *oddCount) {
  for (int i = 0; i < n; i++) {
    if (*(arr + i) % 2 == 0) {
      *(even + (*evenCount)) = *(arr + i);
      (*evenCount)++;

    } else {
      *(odd + (*oddCount)) = *(arr + i);
      (*oddCount)++;
    }
  }
  return;
}

int main() {
  int n;
  scanf("%d", &n);

  int arr[n], even[n], odd[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &(arr[i]));
  }

  int evenCount = 0, oddCount = 0;
  splitEvenOdd(arr, n, even, &evenCount, odd, &oddCount);

  printf("Even: ");
  for (int i = 0; i < evenCount; i++) {
    printf("%d ", even[i]);
  }
  printf("\n");
  printf("Odd: ");
  for (int i = 0; i < oddCount; i++) {
    printf("%d ", odd[i]);
  }
  printf("\n");

  return 0;
}
