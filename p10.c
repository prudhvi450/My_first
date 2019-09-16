#include<stdio.h>
#include<string.h>
void main()
{
char string1[]="stringcopy";
char string2[20];
char string3[20];
printf("\n%s",strcpy(string2,string1));
printf("\n %s",strcpy(string3,"wellabcdefghij"));
//printf("\n %s",strncpy(string3,string1,8));
printf("\n %s",strstr(string3,"cd"));
}
