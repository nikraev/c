#include <stdio.h>

int strend(char* a, char* b);

void main(void)
{
  char* a = "hello";
  char* b = "llo";

  if(strend(a,b) == 1)
    {
      printf("Оканчивается");
    }
  else
    {
      printf("Не оканчивается");
    }
}
