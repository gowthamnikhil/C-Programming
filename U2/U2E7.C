#include <stdio.h>
#include <math.h>

int main(void) {
  printf("U2E7\n");
  float a,b,PI = 3.14159;
  printf("Enter the number !\n");
  scanf("%f",&a);
  b=a*(PI/180.0);
  printf("cos %f\n",cos(b));
  printf("sin %f\n",sin(b));
  printf("tan %f\n",tan(b));
  printf("cosec %f\n",1/sin(b));
  printf("sec %f\n",1/cos(b));
  printf("cot %f\n",1/tan(b));
  return 0;
}