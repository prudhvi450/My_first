#include<stdio.h>
#include<string.h>
void *rrr;
int main(void)
{	
rrr=strdup("bbb");
free(rrr);
return 0;
}
