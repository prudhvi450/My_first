#include<stdio.h>
int main()
{
 int a[5][5],b[5][5],r[5][5];
 int i,j,k,m,n,p,q,sum=0;

 printf("enter size of matrices A:");
 scanf("%d %d",&m,&n);

 printf("Enter size of matrices B:");
 scanf("%d %d",&p,&q);


 if(n!=p)printf("mat mul not possible due to dimension mismatch");

 else
 {
   printf("Enter A Matrice");

   for(i=0;i<m;i++)
   {
    for(j=0;j<n;j++)
    {
     scanf("%d",&a[i][j]);
    }
   }

  printf("Enter B Matrice");

   for(i=0;i<p;i++)
   {
    for(j=0;j<q;j++)
    {
     scanf("%d",&b[i][j]);
    }
   }
  

  for(i=0;i<m;i++)
  {
   for(j=0;j<q;j++)
    {
     for(k=0;k<p;k++)
      {
        sum=sum+(a[i][k]*b[k][j]);
       } 
     r[i][j]=sum;sum=0;
    }
  }


printf("Multiplication of two matrices is: ");

 for(i=0;i<m;i++)
  {
   for(j=0;j<q;j++)
    {printf("%d ",r[i][j]);}
    printf("\n");
  }
}
return 0;
}
