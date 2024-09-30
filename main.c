#include <stdio.h>

  
int main() {

    float a, b;

    scanf("%f %f", &a, &b);

    if(a > 10000 || b > 10000 || a <= 0 || b <= 0 || a < b){
      printf("SAI DU LIEU");
    } else {
      printf("%.2f", a*b/0);
    }
  
    return 0;
}