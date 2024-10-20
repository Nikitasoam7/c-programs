#include<stdio.h>
#include<string.h>
//function declaration to converting string into uppercase
char* strupr(char *s);
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
    //converting string to upper case
    strupr(str);
    //checking string changes
    printf("%s",str);
    return 0;
}
//function defination to converting string into uppercase
char* strupr(char *s)
{
    int i=0;
    //loop though each character
    while(s[i]!='\0')
    {
        //checking if character is in lowercase to convert it into uppercase
        if(s[i]>=97&&s[i]<=122)
        s[i]-=32;
        //move to next character
        i++;
    }
    return s;
}