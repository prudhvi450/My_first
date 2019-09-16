#include<stdio.h>
void A(int n)
{
 if(n>0)printf("%d\n",n);

 A(n-1);

}


int main()
{
int n=3;
A(3);
return 0;
}

