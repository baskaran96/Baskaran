#include<stdio.h>
int main()
{
int n,x,y,z;
printf("enter the number of elements");
scanf("%d%d%d",&x,&y,&z);
if(x>y)
{
  if(x>z)
{
printf("%d",x);
}
}
else if(y>z)
{
printf("%d",y);
}
else
{
printf("%d",z);

}
}
