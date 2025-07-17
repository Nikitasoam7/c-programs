#include<stdio.h>
void sort(int *ptr,int size);
int main()
{
    int ar[10];
    printf("Enter 10 numbers:");
    for(int i=0;i<10;i++)
    scanf("%d",&ar[i]);
    sort(ar,10);
    printf("After sorting Array\n");
    for(int i=0;i<10;i++)
    printf("%d, ",ar[i]);
    return 0;
}
void sort(int *ptr,int size)
{
    if(size>1)
    {
        int i=1;
        while(i<size)
        {
            int key=ptr[i];
            int j=i-1;
            while(j>=0 && key<ptr[j])
            {
                ptr[j+1]=ptr[j];
                j--;
            }
            ptr[j+1]=key;
            i++;
        }
    }
}