
#include<stdio.h>
#include<math.h>
int main()
{
int x1,y1,rem=0,sum=0;
scanf("%d",&x1);
y1=x1;
while(x1>0)
{
rem=x1%10;
sum=sum+pow(rem,3);
x1=x1/10;
}
if(y1==sum)
printf("yes");
else
printf("no");
return 0;
}
