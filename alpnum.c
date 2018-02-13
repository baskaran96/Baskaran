#include<stdio.h>
#include<ctype.h>
int main (void)
{
	char a[20];
  printf("enter a string");
  scanf("%s",&a);
	if(isalnum(a))
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
