#include<stdio.h>
int main()
{
	int  x,y,temp;
	printf("enter the value");
	scanf("%d%d",&x,&y);
	printf("Before swapping\nx=%d\ny=%d\n",x,y);
	temp=x;
	x=y;
	y=temp;
	printf("after swapping\nx=%d\ny=%d\n",x,y);
	return 0;
}
