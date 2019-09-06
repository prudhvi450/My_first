#include<stdio.h>
int
fac (int x)
{
  if (x == 1)
    return 1;
  else
    return x * fac (x - 1);
}

void
main ()
{
  int x, f;
  scanf ("%d", &x);
  f = fac (x);
  printf ("%d ! = %d", x, f);

}
