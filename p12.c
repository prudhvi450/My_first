#include<stdio.h>
#include<string.h>
void main()
{
char b[10],c[4],a[]="Hello world",d[]="Good Morning";
strcpy(b,a);
printf("%s\n",b);
memset(c,'\0',sizeof(c));
strncpy(c,b,3);
printf("%s\n",c);
printf("%s",strstr(d,"Good"));

}
