#include <stdio.h>

  
int main() {

    int a, b;

    scanf("%d %d", &a, &b);

    if(a > 10000 || b > 10000 || a <= 0 || b <= 0 || a < b){
      printf("SAI DU LIEU");
    } else {
      printf("%d", a*b);
    }
  
    return 0;
}