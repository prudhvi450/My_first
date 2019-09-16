/*#include <stdio.h>
    int main()
    {
        char a[100], b[100], i;
        printf("Enter string a: ");
        scanf("%s",a);
        for(i = 0; a[i] != '\0'; i++)
        {
            b[i] = a[i];
        }
        b[i] = '\0';
        printf("String b: %s", b);
        return 0;
    }*/
#include<stdio.h>

void copy(char *s,char *t)
{
while(*s++=*t++);
}


void main()
{
char s[]="Hello Tanvi";
char t[20];int j=0;
copy(t,s);
printf("The copied string using function is %s\n",t);
}
