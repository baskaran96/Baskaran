#include <stdio.h>
int main(void)
{
	int i,x;
	char b[10];
	scanf("%s",b);
	x=strlen(b);
	for(i=0;i<x;i++)
	{
		printf("\n %c",b[i]);
	}
	return 0;
}
