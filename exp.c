#include<stdio.h>
int main()
{
 int x;
 char *s;
 
 printf("Enter your name");
 scanf("%s",s);

 printf("Enter a number");
 scanf("%d",&x);
 
 if(x<7)printf("%s better luck next time %d",s,x);
  else printf("%s cool %d",s,x);
 
return 0;
 



}

