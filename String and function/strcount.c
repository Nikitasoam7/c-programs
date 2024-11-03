#include<stdio.h>
#include<string.h>
int strcount(char*);
int main()
{
    char str[50];
    printf("Enter some words:");
    fgets(str,sizeof(str),stdin);
    size_t len=strlen(str);
    if(len>0&&str[len-1]=='\n')
    str[len-1]='\0';
    int words=strcount(str);
    printf("%d words in given string.",words);
    getchar();
    return 0;
}
int strcount(char* s)
{
    int i=0,count=0;
    while(s[i]!='\0'&&count==0)
    {
        if(s[i]!=32)
        count++;
        i++;
    }
    while(s[i]!='\0')
    {
        if(s[i]==32&&s[i+1]!='\0'&&s[i+1]!=32)
        count++;
        i++;
    }
    return count;
}