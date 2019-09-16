#include<stdio.h>
int main()
{
 char *name[]={"ravi","jadeja","ravindra"};

 printf("%s\n",*name+1);
 printf("%s\n",*name+2);
 printf("%s\n",*(name+2)+7);

return 0;
}
