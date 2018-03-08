#include<stdio.h>
#include<string.h>
int main(void)
{
    char x[10];
    int n,t;
    printf("Enter the string:");
    scanf("%s",x);
    n=strlen(x);
    t=n/2;
    x[t]='*';
    printf("%s",x);
    return 0;
}
