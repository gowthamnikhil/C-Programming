#include <stdio.h>
#include <math.h>

int main(void) {
  printf("U2E6\n");
  int t,v,wcf;
  printf("Enter the Temperature !\n");
  scanf("%d",&t);
  printf("Enter the Wind velocity !\n");
  scanf("%d",&v);
  wcf=35.74 + 0.6215*t+ (0.4275*t-35.75)* pow(v, 0.16);
    //35.74 + 0.6215t + ( 0.4275t - 35.75 ) * v 0.16
  printf("%d",wcf);
  return 0;
}