#include<stdio.h>
struct time {
    int hr;
    int min;
    int sec;
};
typedef struct time time;
time difference(time,time);
int main()
{
    time t1,t2;
    printf("Enter two time periods HH:MM:SS: ");
    scanf("%d:%d:%d",&t1.hr,&t1.min,&t1.sec);
    scanf("%d:%d:%d",&t2.hr,&t2.min,&t2.sec);
    time t3=difference(t1,t2);
    printf("Difference between given time periods is %d:%d:%d",t3.hr,t3.min,t3.sec);
    return 0;
}
time difference(time t1,time t2)
{
    time t3;
    if(t1.hr>t2.hr||(t1.hr==t2.hr&&t1.min>t2.min)||(t1.hr==t2.hr&&t1.min==t2.min&&t1.sec>t2.sec))
    {
        t3=t1;
        t1=t2;
        t2=t3;
    }
    if(t1.sec>t2.sec)
    {
        t2.min--;
        t2.sec+=60;
    }
    if(t1.min>t2.min)
    {
        t2.hr--;
        t2.min+=60;
    }
    t3.hr=t2.hr-t1.hr;
    t3.min=t2.min-t1.min;
    t3.sec=t2.sec-t1.sec;
    return t3;
}