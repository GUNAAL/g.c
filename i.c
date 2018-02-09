#include <stdio.h>
  int main() {
    int a[20];
    int i;
    int greatest;
    printf("Enter ten values:")
    for (i = 1; i < 20; i++) {
    scanf("%d", &a[i]);
    }
    greatest = a[1];
    for (i = 1; i < 20; i++) {
if (a[i] > greatest) {
greatest = a[i];
    }
    }
    printf("
    Greatest of ten numbers is %d", greatest);
    return 0;
  }
