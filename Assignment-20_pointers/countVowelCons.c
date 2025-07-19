#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],*p;
    p=str;
    printf("Enter some words:");
    fgets(p,20,stdin);

    size_t len=strlen(p);
    if(len>0 && p[len-1]=='\n')
    p[len-1]='\0';

    int vow=0,cons=0;
    int i=0;
    while(p[i]!='\0')
    {
        if(p[i]=='a' ||p[i]=='e' ||p[i]=='i' ||p[i]=='o' ||p[i]=='u' ||
        p[i]=='A' ||p[i]=='E' ||p[i]=='I' ||p[i]=='O' ||p[i]=='U')
            vow++;
        else if(p[i]>='B'&& p[i]<='Z' || p[i]>='b' && p[i]<='z')
            cons++;
        i++;
    }
    printf("vowels = %d\nconsonants = %d",vow,cons);
    return 0;
}