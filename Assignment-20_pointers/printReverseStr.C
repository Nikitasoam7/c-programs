#include<stdio.h>
#include<string.h>
#define MAX 15
int main()
{
    char str[MAX],*p;
    p=str;
    printf("Enter some words: ");
    fgets(p,MAX,stdin);

    size_t len=strlen(p);
    if(len>0 && p[len-1]=='\n')
    p[len-1]='\0';

    for(int i=len-2;i>=0;i--)
    printf("%c",p[i]);
    return 0;
}