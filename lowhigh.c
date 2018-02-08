#include<stdio.h>
int main()
{
int x,i,a[10],lar,sml;
scanf("%d",&x);
for(i=0;i<x;i++)
{
scanf("%d",&a[i]);
}
lar=sml=a[0];
for(i=0;i<x;i++)
{
if(a[i]>lar)
lar=a[i];
if(a[i]<sml)
sml=a[i];
}
printf("%d\n",lar);
printf("%d\n",sml);
return 0;
}
