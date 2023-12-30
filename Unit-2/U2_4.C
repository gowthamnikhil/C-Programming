#include <stdio.h>
#include <math.h>

int main(void) {
  printf("U2E4\n");
  float y1,x1,r,t,a,pi=3.141592;
  printf("Enter the number !\n");
  scanf("%f",&x1);
  scanf("%f",&y1);
  r = sqrt(x1*x1+y1*y1);
  t = atan2(y1,x1);
  printf("%0.2f,%0.3f",r,t);
  return 0;
}
