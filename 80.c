#include <stdio.h>
void main()
{
	int x,t,r=0,i;
	printf("Enter the number:");
    scanf("%d",&x);
	while(x!=0)
	{
		t=x%10;
		r=(r*10)+t;
		x=x/10;
	}
	printf("The odd numbers are:");
	while(r!=0)
	{
		i=r%10;
		r=r/10;
		if(i%2!=0)
		{
		  printf("%d  ",i);
		}

	}
}
