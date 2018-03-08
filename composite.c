#include <stdio.h>
void main()
{
int x,count=0,i;
printf("Enter the number:");
scanf("%d",&x);
for(i=2;i<x;i++)
{
if((x%i)==0)
{
count++;
}
}
if(count==0)
{
printf("No");
}
else
{
printf("Yes");
}
}
