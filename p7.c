#include<stdio.h>
void main()
{

char * name1="Ranjith";
char name2[]="Kumar";
printf("%s\n",name1);
printf("%s\n",name2);
printf("%c\n",name1[2]);
printf("%c\n",name2[4]);
printf("%c\n",name1[2]+1);
printf("%c\n",name2[4]+1);
printf("%s\n",name1+(name1[1]+1)-name2[3]);
printf("%s\n",name1+1);
}
