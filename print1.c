#include<stdio.h>
int main()
{
int n,i,c=0;
printf("enter the number:");
scanf("%d",&n);
for(i=1;i<n+1;i++)
{
if(n%i==0)
{
c++;
}
}
if(c==2)
{
printf("It is a prime number:");
}
else
{
printf("It is not a prime number:");
return 0;
}
}
