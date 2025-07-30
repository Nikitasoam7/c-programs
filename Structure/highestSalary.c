#include<stdio.h>
#include<string.h>
#define SIZE 10
struct Employee{
    int id;
    char name[20];
    float salary;
};
struct Employee input()
{
    struct Employee emp;
    scanf("%d",&emp.id);
    fflush(stdin);
    fgets(emp.name,20,stdin);
    size_t len=strlen(emp.name);
    if(len>0 && emp.name[len-1]=='\n')
    emp.name[len-1]='\0';

    scanf("%f",&emp.salary);
    return emp;
}
void display(struct Employee* emp,int size)
{
    for(int i=0;i<size;i++)
    printf("%d, %s, %f \n",emp[i].id,(emp+i)->name,(emp+i)->salary);
}
struct Employee highestSalary(struct Employee* emp,int size)
{
    struct Employee temp;
    temp=emp[0];
    if(size>1)
    {
        int i;
        for(i=1;i<size;i++)
        {
            if(emp[i].salary>temp.salary)
            {
                temp=emp[i];
            }
        }
        return temp;
    }
    return temp;
}
int main()
{
    struct Employee emp[SIZE];
    for(int i=0;i<SIZE;i++)
    {
        printf("Enter the id,name and salary for %d employee:",i+1);
        emp[i]=input();
    }
    display(emp,SIZE);
    struct Employee maxSalaryEmp = highestSalary(emp,SIZE);
    printf("%d\t%s\t%f",maxSalaryEmp.id,maxSalaryEmp.name,maxSalaryEmp.salary);
}