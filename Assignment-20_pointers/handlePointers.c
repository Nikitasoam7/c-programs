#include<stdio.h>
int main()
{
    int a=36,*ptr;
    ptr=&a;
    printf("int a=36;\nint *ptr;\nptr=&a;\n");
    printf("Enter any value to input in 'a' through ptr:");
    scanf("%d",ptr);
    printf("*ptr=%d, a=%d",*ptr,a);
    return 0;
}