#include <stdio.h>
#include <math.h>

int main(void) {
  printf("U2E5\n");
  int L1,L2,G1,G2,d;
  printf("Enter the latitude(x,y) !\n");
  scanf("%d",&L1);
  scanf("%d",&L2);
  printf("Enter the longitude(x,y) !\n");
  scanf("%d",&G1);
  scanf("%d",&G2);
  
  d=3963* acos(sin(L1)*sin(L2)+cos(L1)*cos(L2)*cos(G2 - G1));
  printf("%d",d);
  return 0;
}