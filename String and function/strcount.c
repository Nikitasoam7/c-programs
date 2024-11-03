#include<stdio.h>
#include<string.h>
//function to find no of words in string
int strcount(char*);
int main()
{
    char str[50];

    //Asking for input a sentence from user
    printf("Enter some words:");
    fgets(str,sizeof(str),stdin);

    //removing the trailing newline character if present
    size_t len=strlen(str);
    if(len>0&&str[len-1]=='\n')
    str[len-1]='\0';

    //calculating words in string by using function
    int words=strcount(str);
    printf("%d words in given string.",words);

    getchar();
    return 0;
}
//function defination to calculate number of words in a string
int strcount(char* s)
{
    int i=0,count=0;
    //loop to get each character
    while(s[i]!='\0')
    {

        if(s[i]==32&&s[i+1]!='\0'&&s[i+1]!=32)//
        count++;
        else if(s[i]!=32&&count==0)//if it is frist character of string 
        count++;
        //moving to the next character
        i++;
    }
    return count;
}