#include <stdio.h>

int main(void) {
	int num,r,n1=0,n2=0;
	scanf("%d",&num);
	while(num>0)
	{
		r=num%10;
		n1++;
		if(r==1||r==0)
		n2++;
		num=num/10;
	}
	if(n1==n2)
	printf("yes");
	else
	printf("no");
	return 0;
}
