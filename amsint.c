#include <stdio.h>

int main(void) 
{
	int x,y,i,s,rem;
	int sum=0;
	scanf("%d\t%d",&x,&y);
	for(i=x+1;i<y;i++)
	{
		s=i;
		int z=i;
                        sum=0;
 		while(z>0)
		{
		            rem=z%10;
			sum=sum+rem*rem*rem;
			z=z/10;
		}
	            if(sum==s)
		printf("%d",sum);
	}
	return 0;
}

