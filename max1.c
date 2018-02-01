#include<stdio.h>
void main()
{
	int i,n,temp,a[100],max;
	printf("enter array element\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		for(n=i+1;n<10;n++)
	{
		if(a[i]<a[n])
		{
			temp=a[i];
			a[i]=a[n];
			a[n]=temp;
		}
	}
	}
	for(i=0;i<10;i++)
	{
	max=a[0];
	}
		printf("max among 10 elements %d",max);
}
