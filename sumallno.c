#include <stdio.h>

int main()
{
    int i,x,r,sum=0;
    printf("Enter N:");
    scanf("%d",&x);
    while(x!=0)
    {
     r=x%10;
     sum=sum+r;
     x=x/10;
    }
    printf("\nThe Sum is %d",sum);
}
