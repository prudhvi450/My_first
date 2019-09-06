#include<stdio.h>
int main()
{
  int i;
  char x;
    
 printf("Enter any symbol for ascii:");
 scanf("%c",&x);
   i=x;
 if(i>='a' && i<='z') {i=i-32;printf("%c = %d",i,i);}
    else if(i='A' && i<='Z') {printf("%c = %d",i,i);}
         else printf("%c = %d ",i,i);
 
 if(i=='A' || i=='E' || i=='I' || i=='O' || i=='U' || i=='a' || i=='e' || i=='i' || i=='o' || i=='u')
printf("%c is vowel",x);
 else printf("%c is not vowel",x);
 
  return 0;
}
