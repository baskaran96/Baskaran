#include<stdio.h>
int main()
{
    int n,m,x;
    printf("Enter the value of N and M");
    scanf("%d",&n,&m);
    x=n+m;
    if((x%2)==0)
    {
    printf(" x is even ");
    }
    else
    {
    printf(" x is odd");
    }
    return 0;
}
