#include <stdio.h>

int main() {
  char arr[1000];
  scanf(" %[^\n]", arr);

  int vowels = 0, upperVowels = 0, digits = 0, spaces = 0;
  for (int i = 0; arr[i] != '\0'; i++) {
    char c = arr[i];

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' ||
        c == 'E' || c == 'I' || c == 'O' || c == 'U') {
      vowels++;
      if (c >= 'A' && c <= 'Z') {
        upperVowels++;
      }
    }

    if (c >= '0' && c <= '9') {
      digits++;
    }

    if (c == ' ') {
      spaces++;
    }
  }

  printf("Vowels: %d\n", vowels);
  printf("Upper vowels: %d\n", upperVowels);
  printf("Digits: %d\n", digits);
  printf("Spaces: %d\n", spaces);

  return 0;
}
