#include <stdio.h>

int main() {
  int n, temp, sumOfEven = 0;

  scanf("%d", &n);
  while(n--){
    scanf("%d", &temp);
    sumOfEven += !(temp % 2);
  }

  printf("%d", sumOfEven);
  return 0;
}