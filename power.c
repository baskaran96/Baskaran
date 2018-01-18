#include<stdio.h>
int main()
{
int x,y,z,result;
scanf("%d",&x);
y=x;
while(y!=0)
{
z=y%10;
result=result+(z*z*z);
y=y/10;
}
if(result==x)
{
printf("The number is armstrong number");
}
else
{
printf("the number is not an armstrong number");
}
}
