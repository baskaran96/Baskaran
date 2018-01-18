#include<stdio.h>
int main()
{
int a,b,rem,rev=0;
printf("Enter the number");
scanf("%d",&a);
b=a;
while(a>0)
{
rem=a%10;
rev=rev*10+rem;
a=a/10;
}
if(b==rev)
{
printf("The number is a palindrome");
}
else
{
printf("The number is not a palindrome");
}
}
