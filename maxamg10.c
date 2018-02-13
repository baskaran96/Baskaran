#include<stdio.h>
void main()
{
	int x,n,temp,a[100],max;
	printf("enter array element\n");
	for(x=0;x<10;x++)
	{
		scanf("%d",&a[x]);
	}
	for(x=0;x<10;x++)
	{
		for(n=x+1;n<10;n++)
	{
		if(a[x]<a[n])
		{
			temp=a[x];
			a[x]=a[n];
			a[n]=temp;
		}
	}
	}
	for(x=0;x<10;x++)
	{
	max=a[0];
	}
		printf("max among 10 elements %d",max);
}
