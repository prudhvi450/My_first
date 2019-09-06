#include<stdio.h>
int main()
{
 char a;

 printf("Enter a character :");
 scanf("%c",&a);
 
 switch(a)
{
 case '0':printf("dhoni is not current captain");
   break;
 case '1':printf("kohli is our presnt captian");
  break;
 case '2':printf("Rohit is our vice captain");
 break;
 default:printf("hello");
 }
return 0;



}
