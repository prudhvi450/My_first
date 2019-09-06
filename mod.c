#include<stdio.h>
int mod(int x,int y)
{
 int z;
 z=x%y;
 return z; 
}
void main()
{
  int x,y,r;
  scanf("%d %d",&x,&y);
  r=mod(x,y);
  printf("%d",r);
 
}
