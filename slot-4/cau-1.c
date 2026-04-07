#include <stdio.h>

void doubleValues(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    arr[i] *= 2;
  }
  return;
}

void printForward(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  return;
}

void printBackward(int arr[], int n) {
  for (int i = (n - 1); i >= 0; i--) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  return;
}

int main() {
  int n;
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  doubleValues(arr, n);

  printForward(arr, n);

  printBackward(arr, n);
}
