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
    int i = 0, count = 0;
    int in_word = 0; // Boolean flag to track if we are inside a word
    
    // Loop through the string
    while (s[i] != '\0') {
        // Check if the current character is not a space
        if (s[i] != ' ') {
            if (!in_word) {
                count++;
                in_word = 1; // Set the flag indicating for check if we are inside a word
            }
        }
        else {
            in_word = 0;
        }
        i++;
    }
    return count;
}