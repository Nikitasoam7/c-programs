#include<stdio.h>
#define SIZE 10
int sum(int*,int);
int main()
{
    int ar[SIZE];
    int *ptr=ar;
    printf("Enter %d numbers:",SIZE);
    for(int i=0;i<SIZE;i++)
        scanf("%d",&ptr[i]);
    int s = sum(ptr,SIZE);
    printf("Sum of elements of array is %d.",s);
    return 0;
}
int sum(int*p,int s)
{
    if(s>1)
    {
        int i=0,sum=0;
        while(i<s)
        {
            sum+=p[i];
            i++;
        }
        return sum;
    }
    return p[0];
}
