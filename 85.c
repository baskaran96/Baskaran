#include<stdio.h>
int main()
{
    char x[100];
    int i;
    scanf("%s",x);
    printf("\n odd: ");
    for(i=0;x[i]!='\0';i++)
    {
        if(i%2==0)
        {
            printf("%c",x[i]);
        }
    }
    printf("\n even: ");
    for(i=0;x[i]!='\0';i++)
    {
        if(i%2==1)
        {
            printf("%c",x[i]);
        }
    }
    return 0;
}
