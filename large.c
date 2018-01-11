#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("enter the values");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
        printf("%d largest number",a);
        }
    }
        else if(b>c)
        {
            printf("%d largest number",b);
        }
        else
        {
            printf("%d largest number",c);
        }
    }

