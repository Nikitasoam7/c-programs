#include<stdio.h>
int strlength(char *);
int main()
{
  char st[]="hello! how are you.";
  int length=strlength(st);
  printf("length of the string is %d.",length);
 return 0;
}
int strlength(char *p)
{
  int i;
  for (i=0;*(p+i)!='\0';i++);
  return i;
}
