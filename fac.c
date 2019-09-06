#include<stdio.h>
int fac(int x)
{
 int f=1;
  while(x!=0)
 {
  f=f*x;
  x--;
 } 

return f;
}

void main()
{
 int x,f;
 scanf("%d",&x);
 f=fac(x);
 printf("%d ! = %d",x,f);

}
