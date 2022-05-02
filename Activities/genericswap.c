#include<stdio.h>
void genericswap(void *a,void *b,int x)
{
char temp;
char *aa=(char*)a;
char *bb=(char*)b;
for (int i=0;i<x;i++)
{
temp=aa[i];
aa[i]=bb[i];
bb[i]=temp;
}
}
int main()
{
int a=5,b=7;
char c='x',d='y';
float e=2.45,f=3.65;
int a1[2]={1,2},a2[2]={3,4};
genericswap(&a, &b,sizeof(a));
printf("%d %d\n",a,b);
genericswap(&c, &d,sizeof(c));
printf("%c %c\n",c,d);
genericswap(&e, &f,sizeof(e));
printf("%f %f\n",e,f);
for(int i=0;i<2;i++)
{
genericswap(&a1,&a2,sizeof(a1));
}
for(int i=0;i<2;i++)
{
printf("a1=%d a2=%d\n",a1[i],a2[i]);
}
}


