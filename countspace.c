#include<stdio.h>
int main()
{
char x[100];
int count=0,i;
scanf("%s",&x);
for(i=0;x[i]!=NULL;i++)
{
if(x[i]==' ')
{
count++;
}
}
printf("%d",count);
return 0;
}
