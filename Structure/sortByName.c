# include<stdio.h>
#include<string.h>
#define SIZE 5
struct employee{
    int id;
    char name[30];
    float salary;
};
struct employee typedef Emp;
void input(Emp* e,int s)
{
    for(int i=0;i<s;i++)
    {
        printf("Enter id,name and salary of employee %d: ",i+1);
        scanf("%d",&e[i].id);
        fflush(stdin);
        fgets(e[i].name,30,stdin);

        size_t len=strlen(e[i].name);
        if(len>0 && e[i].name[len-1]=='\n')
        e[i].name[len-1]='\0';
        scanf("%f",&e[i].salary);
    }
}
void display(Emp* e,int s)
{
    for(int i=0;i<s;i++)
    printf("\n%d\t%s\t%f",e[i].id,e[i].name,e[i].salary);
}
int strlenn(char* s)
{
    int i;
    for( i=0;s[i]!='\0';i++);
    return i;
}
int strcmpp(char* s1,char *s2)
{
    int i,len1=strlenn(s1),len2=strlenn(s2);
    char ch1,ch2;
    for(i=0;i<len1 && i<len2;i++)
    {
        ch1=s1[i];
        ch2=s2[i];
        if((ch1>='A' && ch1<='Z' || ch1>='a' && ch1<='z')&&
            (ch2>='A' && ch2<='Z' || ch2>='a' && ch2<='z'))
        {
            if(ch1>='A' && ch1<='Z')
            ch1=s1[i]+32;
            if(ch2>='A' && ch2<='Z')
            ch2=s2[i]+32;
            
            if(ch1>ch2)
            return 1;
            else if(ch1<ch2)
            return -1;
        }
        else if(ch1>ch2)
        return 1;
        else if(ch1<ch2)
        return -1;
    }
    if(len1>len2)
    return 1;
    else if(len1<len2)
    return -1;
    return 0;
    
}
void sortByName(Emp *e,int s)
{
    if(s<2) return ;
    for(int i=0;i<s-1;i++)
    {
        for(int j=i+1;j<s;j++)
        {
            if(strcmpp(e[i].name,e[j].name)>0)
            {
                Emp temp;
                temp=e[i];
                e[i]=e[j];
                e[j]=temp;
            }
        }
    }
}
int main()
{
    Emp  e[SIZE];
    input(e,SIZE);
    display(e,SIZE);
    sortByName(e,SIZE);
    printf("\nData after shorting by Name");
    display(e,SIZE);
    return 0;
}