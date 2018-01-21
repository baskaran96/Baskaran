#include <stdio.h>

int main()
{
	int b[100]={2,1,3}; 
	int i,j,n=3,temp;
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(b[i]>b[j])
		{
		temp=b[i];
		b[i]=b[j];
		b[j]=temp;
		}
	}
}
for(i=0;i<n;i++)
{
	printf("%d\t",b[i]);
}
printf("The medium element");
n=(n+1)/2-1;
printf("%d",b[n]);

return 0;
	
}
