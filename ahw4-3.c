#include <stdio.h>
#include <math.h>

int main(void){
  double a, b, c, d;
  printf("a? ");  scanf("%lf", &a);
  printf("b? ");  scanf("%lf", &b);
  printf("c? ");  scanf("%lf", &c);
  printf("Input is a=%lf b=%lf c=%lf:\n", a, b, c);
  d = b*b - 4*a*c;
  if (a!= 0 && d > 0){
    printf("Output should be ");
    printf("%f and ", (-b + sqrt(d))/(2*a));
    printf("%f\n", (-b - sqrt(d))/(2*a));
  } else {
    if (a == 0) {
      printf("Output should be %f\n", (-c/b));
    }
    if (d < 0){
      printf("The real solution does not exist\n");
    }  
  }

  return 0;
}
