#include <stdio.h>
#include <math.h>

int main(void) {
  printf("U2E3\n");
  int area,s,a,b,c;
  printf("Enter the numbers !\n");
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  s=(a+b+c)/2;
  area = sqrt(s*(s-a)*(s-b)*(s-c));
  printf("%d",area);
  return 0;
}