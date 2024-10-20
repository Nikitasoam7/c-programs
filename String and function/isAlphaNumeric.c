#include<stdio.h>
#include<string.h>
//funtion declaration for checking string is alpha numeric
int isAlphaNumeric(char *);
int main()
{
    char str[30];
    //input: asking string input from user using fgets
    printf("Enter few words:");
    fgets(str,sizeof(str),stdin);
    
    //removing newline character
    size_t len=strlen(str);
    if(len>0&&str[len-1]=='\n')
    str[len-1]='\0';
    //check string is aplha numeric or not by calling the function
    int ian=isAlphaNumeric(str);
    if(ian>0)
    printf("given string is alpha numeric ");
    else
    printf("string is not aplha numeric");

    getchar();
    return 0;
}

//function defination to check is input string is alpha numeric or not
int isAlphaNumeric(char *s)
{
    int i=0,ch=0,num=0;
    //loop though each character
    while(s[i]!='\0')
    {
        if((s[i]>=65&&s[i]<=90||s[i]>=97&&s[i]<=122)&&ch==0)
        ch++;
        else if(s[i]>=48&&s[i]<=58&&num==0)
        num++;
        if(ch>0&&num>0)
        return 1;
        //moving to next iteration
        i++;
    }
    return 0;
}