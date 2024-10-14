#include<stdio.h>
int strlength(char *);
char* strev(char *s);
int main()
{
  char st[30];
  printf("Enter a sentence:");
  fgets(st,sizeof(st),stdin);

  //removing newline from fgets()
  /*size_t is alias(typedef) name of 
  unsigned int, unsigned long,unsigned long long*/
  size_t len=strlength(st);
  if(len==0&&st[len-1]=='\n')
  st[len-1]='\0';

  printf("reverse string: %s",strev(st));
  return 0;
}
int strlength(char *p)
{
  int i;
  for (i=0;*(p+i)!='\0';i++);
  return i;
}
char* strev(char *s)
{
    int l=strlength(s);
    for(int i=0;i<l/2;i++)
    *(s+l-1-i)=*(s+i)+*(s+l-1-i)-(*(s+i)=*(s+l-1-i));
    return s;
}
