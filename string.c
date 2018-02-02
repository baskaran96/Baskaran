#include<stdio.h>
int main()
{
char x[20];
int i,n;
printf("enter the value");
scanf("%d",&n);
printf("enter the character");
scanf("%s",&x);
for(i=1;i<=n;i++)
{
printf("\t %s",x);
}
}
