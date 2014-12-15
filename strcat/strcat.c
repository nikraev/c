#include <stdio.h>
#include <string.h>
//void strcat(char* a, char* b, char* c);

void main(void)
{
  char* a = "Hello";
  char* b = "World";
  int n = strlen(a) +strlen(b);
  char mas[n+1];
  char* c = mas;
  
  while((*c++ = *a++) != '\0');
  
  printf("c = %s\n", c);
  c--;

  for(; *b != '\0'; b++,c++)
  {
    *c = *b;    
  }
  
  printf("c = %s\n", (c - n));

}
