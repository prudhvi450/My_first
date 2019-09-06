#include<stdio.h>
int main()
{
 int x,i;
 printf("Enter a number");
 scanf("%d",&x); 

 for(i=1;i<=10;i++)
 {
   printf("%d * %d = %d \n",x,i,x*i);
 }
return 0;
}
