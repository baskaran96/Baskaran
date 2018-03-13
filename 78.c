#include<stdio.h>
int main()
{
    int y;
    printf("Enter the value");
    scanf("%d",&y);
    if((y%13)==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
