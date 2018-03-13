#include<stdio.h>
int main(void)
{
    int x,o,m,i;
    printf("Enter the numbers:");
    scanf("%d%d",&x,&o);
    m=x*o;
    for(i = 0; i <= x; i++)
    {
        if (m == i * i)
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}
