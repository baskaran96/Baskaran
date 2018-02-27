#include <stdio.h>

int main() 
{
	int n,m,z;
	printf("\nEnter the number");
	scanf("%d",&n);
	if(n<=10)
	{
		printf("10");
	}
	else
	{
		m=n/10;
		z=(z+1)*10;
	}
    printf("%d",z);
	return 0;
}
