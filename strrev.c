#include<stdio.h>
int main()
{
int i,l,j;
char a[100],b[100];

printf("Enter length of the string");
scanf("%d",&l);
printf("Enter the string");
for(i=0;i<=l;i++)
{
  scanf("%c",&a[i]);
}

for(i=l,j=0;i>=0;i--,j++)
{
  b[j]=a[i];
}


for(j=0;j<=l;j++)
{
  printf("%c",b[j]);
}


return 0;
}
