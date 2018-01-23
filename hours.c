#include<stdio.h>
int main()
{
int tim,hr,mn;
scanf("%d",&tim);
hr=tim/60;
mn=tim%60;
printf("%d %d",hr,mn);
return 0;
}
