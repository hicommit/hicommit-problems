#include <stdio.h>

int main() {
  int n, temp, sumOfEven = 0;

  scanf("%d", &n);
  while(n--){
    scanf("%d", &temp);
    sumOfEven += 1 - (temp % 2 == 0);
  }

  printf("%d", sumOfEven);
  return 0;
}