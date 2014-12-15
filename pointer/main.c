#include <stdio.h>

void obmen(int* p);

void main(void)
{
  int a[1] = {1};

  int* p = a;
  obmen(p);
  printf("%d\n",a[0]);
}

void obmen(int* p)
{
  *p = 2;
}
