#include<stdio.h>
int i,j;
int a[3][3],b[3][3];
int inp()
{
 int i,j;

 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {scanf("%d",&a[i][j]);}
 }
 return 0;
}

int prt()
{


 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
    printf("%d ",a[i][j]);
   }
 printf("\n");
 }
return 0;
}


int main()
{
 /*int i,j;
 int a[3][3],b[3][3];

*/
printf("Enter a array");
/* for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
    scanf("%d",&a[i][j]);
   }
 }

printf("Enter b array");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
    scanf("%d",&b[i][j]);
   }
 } 

*/

inp();
prt();

/*
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
    printf("%d ",a[i][j]+b[i][j]);
   }
 printf("\n");
 }
*/
return 0;
}
