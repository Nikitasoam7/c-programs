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
void sortBySalary(Emp *e,int s)
{
    if(s<2) return ;
    for(int i=0;i<s-1;i++)
    {
        for(int j=i+1;j<s;j++)
        {
            if(e[i].salary>e[j].salary)
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
    sortBySalary(e,SIZE);
    printf("\nData after shorting by salary");
    display(e,SIZE);
    return 0;
}