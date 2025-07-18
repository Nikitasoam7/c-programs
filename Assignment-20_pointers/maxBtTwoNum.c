#include<stdio.h>
int main()
{
    int ar[10];
    printf("Enter 10 numbers:");
    for(int i=0;i<10;i++)
        scanf("%d",&ar[i]);
    int *p,n1,n2;
    p=ar;
    printf("Enter two no to find maximum b/w them:");
    scanf("%d%d",&n1,&n2);
    int l1=-1,l2=-1;
    for(int i=0;i<10;i++)
    {
        if(p[i]==n1)
        l1=i;
        else if(p[i]==n2)
        l2=i;
    }
    if(l1<0 && l2<0)
    return 0;
    int i=l1+1,max=0;
    while(i<l2)
    {
        if(max<p[i])
            max=p[i];
        i++;
    }
    printf("Maximum number b/w %d & %d is %d",n1,n2,max);
    return 0;
}