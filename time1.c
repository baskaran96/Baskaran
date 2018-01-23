#include<stdio.h>
#include<math.h>
int main()
{
	int hr1,mi1,hr2,mi2,hr,mi;
	printf("\n enter the first time in hrs, min");
	scanf("%d",&hr1);
	scanf("%d",&mi1);
	printf("\n enter the second time in hrs ,min");
	scanf("%d",&hr2);
	scanf("%d",&mi2);
	hr=abs(hr1-hr2);
	mi=abs(mi1-mi2);
	printf("\n %d %d",hr,mi);
	return 0;	
}
