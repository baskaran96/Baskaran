#include<stdio.h>
void main()
{
int x;
scanf("%d",&x);
if(x%2==0)
printf("The even number is:%d",x);
else
printf("The nearest even number is:%d",x-1);
}
