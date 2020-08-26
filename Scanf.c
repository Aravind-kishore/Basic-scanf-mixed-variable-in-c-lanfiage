#include <stdio.h>

int main(void) 
{
  int x;
  float y,z;
  scanf("%d%f", &x,&y);
  z= x+y;
  printf("The sum of %d and %f is: %.2f\n",x,y,z);
}
