#include<stdio.h>
int fibo(int);
int main()
{
int n;
int x;
scanf("%d",&n);
if(n<0)
{
printf("enter positive number");
}
else
{
x=fibo(n);
printf("The %d number in fibonacci series is %d\n",n,x);
}
return 0;
}

int fibo(int n)
{
if(n==0)
{
return 0;
}
if(n==1)
{
return 1;
}
else
{
return(fibo(n-1)+fibo(n-2));
}
}
