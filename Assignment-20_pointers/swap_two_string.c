#include<stdio.h>
#include<string.h>
char* swapstr(char*,char*);
int main()
{
    char str1[8],str2[10];
    printf("Enter Two words:");
    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);
    
    //for removal of newline from strings
    size_t len1=strlen(str1);
    size_t len2=strlen(str2);

    if(len1>0&&str1[len1-1]=='\n')
    str1[len1-1]='\0';
    
    if(len2>0&&str2[len2-1]=='\n')
    str2[len2-1]='\0';

    swapstr(str1,str2);

    printf("After Swaping two words\n%s %s",str1,str2);
    return 0;
}
//function defination to strings
char* swapstr(char *s1,char *s2)
{
    int l1=strlen(s1),l2=strlen(s2);
    int size1=sizeof(s1);
    int size2=sizeof(s2);

    if((size1==size2)||l1>=size2&&l2>=size1)
    {
        int i;
        char a[size1];
        for(i=0;i<l1;i++)
        a[i]=s1[i];
        a[i]='\0';
        for(i=0;i<l2;i++)
        s1[i]=s2[i];
        s1[i]='\0';
        for(i=0;i<l1;i++)
        s2[i]=a[i];
        s2[i]='\0';
        return s1;
    }
    printf("swaping is not possible");
    return NULL;
}