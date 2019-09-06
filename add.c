#include<stdio.h>
int main()
{
  int x=5,y=6;
  printf("%d \n",(x^y)^((x&y)<<1));
  return 0;
}
