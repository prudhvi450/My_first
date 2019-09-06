#include<stdio.h>
int main()
{
int a[5][5],m,n,i,j; 

printf("order of the matrices");
scanf("%d %d",&m,&n);

printf("Enter the matrix");

for(i=0;i<m;i++)
{
 for(j=0;j<n;j++)
 {
  scanf("%d",&a[i][j]);
 }
}

printf("diagonal elements of the matrices are:");

for(i=0;i<m;i++)
{
 for(j=0;j<n;j++)
{
if(i==j)printf("%d",a[i][j]);
}
}

for(i=0;i<m;i++)
printf("%d",a[i][m-i-1]);


return 0;
}
