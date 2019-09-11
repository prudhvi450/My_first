#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int q[MAX],r=0,f=0,i;

void insert()
{
 if(r==MAX){printf("\n Queue is full");}
 
 else
 {
  int x;
  printf("\nEnter element to insert:");
  scanf("%d",&x);
  
  q[r]=x;
  r++;
  } 
}
void delete()
{
 if(f==r)printf("\n Queue is Empty");
 else 
 {
   printf("\n %d is deleted",q[f]);
   for(i=0;i<r;i++)
   {
    q[i]=q[i+1]; 
  }
r--;
  }

}
void display()
{
 if(f==r)printf("\n queue is empty");
 else
 {
  for(i=f;i<r;i++)
  printf("%d ",q[i]);
  }
}

int main()
{
 int ch;

 while(1)
 {
  printf("\n Queue Operations are:");
  printf("\n1.insert()\n2.delete()\n3.display()\n4.exit()\n");
 
  printf("\nEnter your choice:");
  scanf("%d",&ch);
  
  switch(ch)
  {
   case 1:insert();break;
   case 2:delete();break;
   case 3:display();break;
   case 4:exit(1);
   default:printf("Invalid Choice");
  }

 }
return 0;
}
