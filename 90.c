#include <stdio.h>
int main()
{
    char x[10];
    int i;
    printf("Enter the string:");
    scanf("%s",x);
    for(i=0;x[i]!='\0';i++)
    {
        if(isdigit(x[i]))
        {
            printf("%c",x[i]);
        }
    }
    return 0;
}
