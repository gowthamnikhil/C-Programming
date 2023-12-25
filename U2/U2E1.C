#include <stdio.h>

int main(void) {
  printf("U2E1\n");
  int n,r,sum=0;
  printf("Enter the number ! \n");
  scanf("%d",&n);
  for(int i=0;i<sizeof(n)-1;i++){
    r = n%10;
    n = n/10;
    sum = sum + r;
  }
  printf("%d",sum);
  return 0;
}