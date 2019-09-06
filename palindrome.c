#include<stdio.h>
int main()
{
  int n,temp,r=0;
  
  printf("Enter a number :");
   scanf("%d",&n);
 
   temp=n; 
  while(temp!=0)
{
   r=r*10;
   r=r+temp%10;
   temp=temp/10;
}
  if(r==n)printf("%d is palindrome number",n);
   else printf("Not Palindrome");
return 0;
}
