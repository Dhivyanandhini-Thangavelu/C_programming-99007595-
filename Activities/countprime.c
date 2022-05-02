#include<stdio.h>
#include<stdlib.h>
void main()
{
int n1,n2,i,j,flag,temp,count=0;
printf("enter the value of starting number:");
scanf("%d",&n1);
printf("enter the value of ending number:");
scanf("%d",&n2);
if(n2<2)
{
printf("There are no primes upto %d\n",n2);
exit(0);
}
printf("prime numbers are \n");
temp=n1;
if(n1%2==0)
{
n1++;
}
for(i=n1;i<=n2;i=i+2)
{
flag=0;
for(j=2;j<=i/2;j++)
{
if((i%j)==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("%d\n",i);
count++;
}
}
printf("no of prime numbers between %d & %d = %d\n",temp,n2,count);
}



