#include <stdio.h>
#include <string.h>

int strend(char* a, char* b);
int strendv2(char* a, char* b);

void main(void)
{
  char* a = "hello";
  char* b = "he1llo";

  if(strend(a,b) == 1)
    {
      printf("Оканчивается\n");
    }
  else
    {
      printf("Не оканчивается\n");
    }
  
  if(strendv2(a,b) == 1)
    {
      printf("Оканчивается\n");
    }
  else
    {
      printf("Не оканчивается\n");
    }
}

int strend(char* a, char* b)
{
  int n = strlen(b);
  a+=strlen(a);
  b+=n;
  
  for(int i = 0 ; i < n; i++, a--, b--)
  {
     if(*a != *b) {return 0;}
  }

  return 1;
}


