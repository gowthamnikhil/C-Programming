#include <stdio.h>

int main(void) {
  printf("U2E2\n");
  int a,b,d=0,n;
  printf("Enter the number !\n");
  scanf("%d",&a);
  for(int i=0;i<5;i++){
    b=a%10;
    a=a/10;
    d=(d*10)+b;
  }
  printf("%d",d);
  return 0;
}