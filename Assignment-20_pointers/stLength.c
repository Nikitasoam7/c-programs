#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];
    char *p=str;
    printf("Enter the word:");
    fgets(p,10,stdin);

    size_t len1=strlen(p);

    if(len1>0&&p[len1-1]=='\n')
    p[len1-1]='\0';
    int i;
    for(i=0;p[i]!='\0';i++);
    printf("length of given string %s is %d",p,i);
    return 0;
}