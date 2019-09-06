#include<stdio.h>
int main()
{
int i,j,k,n,s,p;
 
printf("Enter number of rows:");
scanf("%d",&n);
s=n/2;p=n/2;
for(i=1;i<=(n/2)+1;i++)
{
 for(j=1;j<=s;j++)
 {printf(" ");}
 for(k=1;k<=2*i-1;k++)
 {printf("*");}
 s--;
 printf("\n");
}
for(i=1;i<=n/2;i++)
{
  for(j=1;j<=i;j++)
  {printf(" ");}
  for(k=1;k<=2*p-1;k++)
  {
 
    printf("*");
  }
   p--;
   printf("\n");
}


return 0;
}

