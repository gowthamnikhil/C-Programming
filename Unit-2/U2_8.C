#include <stdio.h>

int main(void) {
  printf("U2E8\n");
  int c,d,temp;
  printf("Enter the value C !\n");
  scanf("%d",&c);
  printf("Enter the value D !\n");
  scanf("%d",&d);
  printf("C %d ,D %d\n",c,d);
  temp = c;
  c=d;
  d=temp;
  printf("C %d ,D %d",c,d);
  return 0;
}