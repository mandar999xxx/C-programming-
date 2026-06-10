// Program to calculate mean and standard deviation
#include <math.h>
#include <stdio.h>
int main() {
  int a[100], n, i;
  float sum = 0, mean, variance = 0, sd;
  printf("Enter the number of elements\n");
  scanf("%d", &n);
  printf("Enter the elements\n");
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
    sum = sum + a[i];
  }
  mean = sum / n;
  for (i = 0; i < n; i++) {
    variance = variance + pow((a[i] - mean), 2);
  }
  variance = variance / n;
  sd = sqrt(variance);
  printf("Mean = %f\n", mean);
  printf("Standard Deviation = %f\n", sd);
  return 0;
}