#include<stdio.h>
#define MAX 10
int main()
{
    int ar[MAX];
    int *ptr=ar;
    printf("Enter %d numbers: ",MAX);
    for(int i=0;i<MAX;i++)
        scanf("%d",&ptr[i]);
    printf("Numbers print in reverse order\n");
    for(int i=MAX-1;i>=0;i--)
        printf("%d, ",ptr[i]);
    return 0;
}