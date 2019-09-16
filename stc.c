#include<stdio.h>
#define MAX 50
struct pru
{
 int x;
 char a[MAX];
 float f;
};
int main()
{

 struct pru p1={5,"Prudhvi",3.14f};
int y=20;
 
 printf("x=%d\n a=%s \n f=%.3f\n y=%d",p1.x,p1.a,p1.f,y);



return 0;
}
