#include<stdio.h>
int leapyear(int year)
{
    if(year%4==0||year%400==0&&year%100!=0)
    {
    return 1;
    }
    else
    {
    return 0;
    }
}
int main()
{
    int year;
    printf("enter year:");
    scanf("%d",&year);
    if(leapyear(year))
    {
       printf("leap year");
    }
    else
    {
        printf("not leap year");
    }
}
