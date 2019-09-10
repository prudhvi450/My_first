#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node* link;
};
struct node* root=NULL;

void append()
{
 struct node* temp;

 temp=(struct node*)malloc(sizeof(struct node));
 
 printf("\nEnter data to append:");
 scanf("%d",&(temp->data)); 

 if(root==NULL){root=temp;temp->link=NULL;}
 else
 {
   struct node* p=NULL;
    p=root;
   while(p->link!=NULL)
   {
     p=p->link;
   }
  p->link=temp;temp->link=NULL;
 }

}
void addatbegin()
{
 struct node* t;
 t=(struct node*)malloc(sizeof(struct node));
 printf("\nEnter data to add at begining");
 scanf("%d",&t->data);
 t->link=NULL;
 if(root==NULL){root=t;t->link=NULL;}
 else
 {
   t->link=root;
   root=t;
 } 



} 
void addatafter()
{
  int a,l=0,i=1;
 struct node* p;
 struct node* t;
 t=(struct node*)malloc(sizeof(struct node));
 printf("\nEnter after how many numbers data to be add:");
 scanf("%d",&a);
 if(root==NULL)l=0;
 else
{
  p=root;
   while(p->link!=NULL)
  {
    l++;p=p->link;
  }
   printf("\nlist length is:%d",++l);

 }


 if(a>l)
  {
   printf("\nInvalid due to list size is %d",l);
  }
 else
 { 
   p=root;
   if(i<a)
   {
     p=p->link;i++; 
   }
   t=(struct node*)malloc(sizeof(struct node));
   printf("\nEnter data to addafter %d location ",a);
   scanf("%d",&t->data);
   t->link=NULL;
   t->link=p->link;
   p->link=t;
  }
}
void length()
{
  int l=0;
 if(root==NULL){printf("\nList is empty\n");}
 else
 {
  struct node* p;
  p=root;
  while(p->link!=NULL)
  {
    l++;p=p->link;
   }
   printf("list length is:%d\n",l+1);

  }

}
void display()
{
 
 if(root==NULL)printf("\nEmpty\n");
 else
  { struct node* t;
    t=root;
  while(t->link!=NULL)
  {
   printf("%d\n",t->data); 
   t=t->link;}
     printf("%d\n",t->data); 
  }
}
void delete()
{
 int l;
 struct node* p=root,*q;
 int loc;
 
 printf("\nEnter location to delete the node:");
 scanf("%d",&loc);

  while(p->link!=NULL)
  {
    l++;p=p->link;
  }
  

   if(loc>++l)
  {
   printf("\nInvalid location");
 } 
else if(loc==1)
 {
 p=root;
 root=p->link;
 p->link=NULL;
 free(p);
}
else
 {
  p=root;
  int i=1;
 while(i<loc-1)
 {
  p=p->link;i++;
  }  
 q=p->link;
 p->link=q->link;
 q->link=NULL;
 free(q);
}


}
int main()
{
 int ch;
 printf("\nSingle linked list operations:\n");

while(1)
{ 
 printf("\n1.append\n2.addatbegin\n3.addatafter\n4.length\n5.display\n6.delete\n7.exit\n");
 printf("Enter your choice:");
 scanf("%d",&ch);
 
 switch(ch)
 {
  case 1:append();break;
  case 2:addatbegin();break;
  case 3:addatafter();break;
  case 4:length();break;
  case 5:display();break;
  case 6:delete();break;
  case 7:exit(1); 
  default:printf("Invalid choice");
 }
}
return 0;
}
