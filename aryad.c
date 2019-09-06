#include<stdio.h>

int add(int a[3][3],int b[3][3])
{ 
 int i,j;
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++){printf("%d ",a[i][j]+b[i][j]);}
  printf("\n");
 } 
 return 0;
}
int inp(int a[3][3])
{
 int i,j;
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++){scanf("%d",&a[i][j]);}
 } 
 return 0;
}

int main()
{
 int a[3][3],b[3][3];
 printf("Enter a array");inp(a);
 printf("Enter b array");inp(b);
 printf("addition of two matrices is: \n");add(a,b);
return 0;
}
