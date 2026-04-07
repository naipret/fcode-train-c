#include <stdio.h>

long long sumArray(int arr[], int n) {
  long long sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }
  return sum;
}

long long productArray(int arr[], int n) {
  long long product = 1;
  for (int i = 0; i < n; i++) {
    product *= arr[i];
  }
  return product;
}

int main() {
  int n;
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  printf("Sum: %lld\n", sumArray(arr, n));
  printf("Product: %lld\n", productArray(arr, n));

  return 0;
}
