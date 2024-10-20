#include<stdio.h>
#include<string.h>
//function declaration to converting string into lowercase
char* strlwr(char *s);
int main()
{
    char str[30];
    //Input: asking from user for a string
    printf("Enter a sentence:");
    fgets(str,sizeof(str),stdin);

    //removing newline character
    size_t len=strlen(str);
    if(len>0&&str[len-1]=='\n')
    str[len-1]='\0';
    //converting string to lower case
    strlwr(str);
    //checking string updated or not
    printf("%s",str);
    return 0;
}
//function defination to converting string into lowercase
char* strlwr(char *s)
{
    int i=0;
    //loop though each character
    while(s[i]!='\0')
    {
        //checking if character is in uppercase to convert it into lowercase
        if(s[i]>=65&&s[i]<=90)
        s[i]+=32;
        //move to next character
        i++;
    }
    return s;
}