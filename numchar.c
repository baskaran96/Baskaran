#include<stdio.h>
int main()
{
	char y[40],count=0,i;
  scanf("%s",&y);
	for(i=0;y[i]!=NULL;i++)
	{
	if(y[i]>='0' && y[i]<='9')
	count++;
	}
	printf("%d",count);
	}
  }
