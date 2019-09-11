#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int cq[MAX],f=-1,r=-1;
void insert()
{
 if(f==r+1 || r==MAX-1)printf("cQueue is full");
 else if(f==-1 && r==-1)
 {
   int ele;
   f=r=0;
   printf("\nEnter element to insert: ");
   scanf("%d",&ele);
    cq[r]=ele;
  }
 else if(r==MAX-1)
  {
   int ele;
   r=0;
   printf("\nEnter element to insert:");
   scanf("%d",&ele);
   cq[r]=ele;
  }
  else 
  {
   int ele;
   r++;
   printf("\nEnter element to insert:");
   scanf("%d",&ele);
   cq[r]=ele;
  }  
}
void delete()
{
 if(f==-1 && r==-1)printf("\ncqueue is empty");
 else if(f==r)
 {
  int ele;
  ele=cq[f];
  f=r=-1;
 }
 else if(f==MAX-1)
 {
  int ele;
  ele=cq[f];
  f=0;
 }
 else
 {
  int ele;
   ele=cq[f];
  f++; 
  }
 
}
void display()
{
 if(f==-1 && r==-1)printf("\ncqueue is empty ");
  
 else
{
 int i;
 for(i=f;i<=r;i++)
 printf("%d",cq[i]);

}



}

int main()
{
 int ch;
 while(1)
 {
 printf("\n Circular Queue Operations");
 printf("\n1.insert()\n2.delete()\n3.display()\n4.exit()");
 
 printf("\n Enter your choice");
 scanf("%d",&ch);
 
 switch(ch)
 {
   case 1:insert();break;
   case 2:delete();break;
   case 3:display();break;
   case 4:exit(1);
   default:printf("\n Invalid choice");
  } 
 }
return 0;
}
