#include<stdio.h>
int main()
{
	int x,i,n=1;
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		n=n*i;
	}
	printf("%d",n);
	return 0;
}
