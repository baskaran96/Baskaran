#include<stdio.h>
#include<conio.h>
void main()
{
char n;
printf("enter the value");
scanf("%s",&n);
if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u')
{
	printf("vowels");
}
else
{
	printf("constants");
}
getch();
}
