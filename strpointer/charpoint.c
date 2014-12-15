#include <stdio.h>
#include <string.h>

void charpoint(char* s, char* t, char* o);

void main(void)
{

  char* str = "Hello World";
  char* addstr = "People";
  char mas[100];
  char* t = mas;

  charpoint(str,addstr,t);
  printf("str: %s\n", t);
}

void charpoint(char* s, char* t, char* o)
{
  while((*o++ = *s++) != '\0');
  o--;
  while((*o++ = *t++) != '\0');
}

