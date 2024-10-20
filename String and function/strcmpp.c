//This is a case-insensitive string comparison program in C
#include<stdio.h>
#include<ctype.h>
#include<string.h>

//function declaration to compare two string in case-insensitive manner
int strcmpp(char *s1,char *s2);
int main()
{
    char str[30],str2[30];
    //Input: asking from user for two string
    printf("Enter two words or names:");

    //using fgets to safely read input strings
    fgets(str,sizeof(str),stdin);
    fgets(str2,sizeof(str2),stdin);

    size_t len=strlen(str); // length of first string
    size_t len2=strlen(str2); //length of second string

    //remove trailing newline character
    if(len>0&&str[len-1]=='\n')
    str[len-1]='\0';

    if(len2>0&&str2[len-1]=='\n')
    str2[len2-1]='\0';

    // compare the two string using strcmpp funtion
    int d=strcmpp(str,str2);
    
    // output and result based on comparison
    if(d<0)
        printf("first string is lexicographically smaller");
    else if(d>0)
        printf("first string is lexicographically larger");
    else 
        printf("both strings are equal");
    getchar();
    return 0;
}

//function defination to compare two string in case-insensitive manner
int strcmpp(char *s1,char *s2)
{
    int i=0;

    //loop through each character of both strings
    while(*(s1+i)!='\0'&& s2[i]!='\0') //we can access string in two ways through point 
    {
        //convert both charaters to lowercase 
        char a=tolower(*(s1+i));
        char b=tolower(*(s2+i));

        //compare characters
        if(a>b)
        return 1;
        else if(a<b)
        return -1;
        
        //move t0 next character
        i++;
    }
    //check if both strings ended or if one is longer than the other
    if(*(s1+i)=='\0'&& s2[i]=='\0')
    return 0;
    else if(*(s1+i)=='\0')
    return -1;
    else return 1;
}
