#include <stdio.h>

void findMinMax(int *arr, int n, int *min, int *max) {
  for (int i = 0; i < n; i++) {
    if (arr[i] < *min) {
      *min = arr[i];
    }
    if (arr[i] > *max) {
      *max = arr[i];
    }
  }
  return;
}

int main() {
  int n;
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &(arr[i]));
  }

  int min = arr[0], max = arr[0];
  findMinMax(arr, n, &min, &max);

  printf("Min = %d\n", min);
  printf("Max = %d\n", max);

  return 0;
}
