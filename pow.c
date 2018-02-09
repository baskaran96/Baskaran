#include<stdio.h>
int main()
{
int x,p=1,i,flag=0;
scanf("%d",&x);
for(i=0;i<x;i++)
{
p=2*p;
if(x==p)
{
flag=1;
}
}
if(flag==1)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
