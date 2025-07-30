#include<stdio.h>
#include<string.h>
struct Employee{
    int id;
    char name[20];
    float salary;
};
struct Employee input()
{
    struct Employee emp;
    printf("Enter the details of employee (id,name and salary):");
    scanf("%d",&emp.id);
    fflush(stdin);
    fgets(emp.name,20,stdin);
    size_t len=strlen(emp.name);
    if(len>0 && emp.name[len-1]=='\n')
    emp.name[len-1]='\0';
    scanf("%f",&emp.salary);
    return emp;
}
void display(struct Employee emp)
{
    printf("%d, %s, %f ",emp.id,emp.name,emp.salary);
}
int main()
{
    struct Employee emp=input();
    display(emp);
    return 0;
}