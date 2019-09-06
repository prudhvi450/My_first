#include<stdio.h>
int main()
{
 int a,b,n,x,i;
 a=0;b=1;
 printf("Enter how many numbers want in fbs");
 scanf("%d",&x);
 for(i=0;i<x;i++)
 {
  n=a+b;
  printf("%d ",a);
  a=b;
  b=n;
 }
 return 0;


}
