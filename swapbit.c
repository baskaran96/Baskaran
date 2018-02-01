#include<stdio.h>
int main()
{
int x,y;
scanf("%d%d",&x,&y);
printf("before swap\n%d\t%d",x,y);
x=x^y;
y=x^y;
x=x^y;
printf("after swap\n%d\t%d",x,y);
return 0;
}
