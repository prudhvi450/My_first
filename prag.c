#include<stdio.h>
#pragma startup func1
#pragma exit func2
void func1()
{
 printf("I am in func1()");
}

void func2()
{
 printf("I am in func2()");
}
int main()
{

printf("I am i main()");
return 0;
}
