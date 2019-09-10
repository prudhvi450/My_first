#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int s[MAX],n,top=-1,x,i;
void push()
{
 if(top>=n-1)printf("\nStack is overflow");
 else
  {
    printf("\nEnter number to push :");
    scanf("%d",&x);
    top++;
    s[top]=x;
  }
 
}
void pop()
{
  if(top<=-1)printf("\n stcak is empty");
  else
  {
    printf("\n %d is poped",s[top]);
    top--;
  }
}
void display()
{
  if(top>=0)
  {
    printf("\nElements in stack are:");
    for(i=top;i>=0;i--)
    {
     printf("\n%d\n",s[i]);
    }
  }
 else printf("\nStack is empty"); 

}

int main()
{
 int ch;
 printf("\nEnter capcity of the stacks:s[%d]",MAX);
 scanf("%d",&n);
 
 while(1)
 {
  printf("\n Stack operations are:\n");
  printf("\n1.push()\n2.pop()\n3.display()\n4.exit\n");
  
  printf("Enter your choice:");
  scanf("%d",&ch);
  
  switch(ch)
  {
   case 1:push();break;
   case 2:pop();break;
   case 3:display();break;
   case 4:exit(1);
   default:printf("\nInvalid choice:");
  }
  
 }

return 0;
}
