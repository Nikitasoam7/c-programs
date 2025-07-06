#include<stdio.h>
//function declaration for swap to int type variable's values
int* swap(int*,int*);
int main()
{
    int var1,var2;
    
    //input: asking numbers to input from user
    printf("Enter two numbers:");
    scanf("%d%d",&var1,&var2);
    swap(&var1,&var2);

    //a check for swap operation done
    printf("After swaping values\na=%d\nb=%d",var1,var2);
    return 0;
}
//function defination to values
int* swap(int *a,int* b)
{
    //swaping statement
    *a=*a+*b-(*b=*a);
    return a;
}