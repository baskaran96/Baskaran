#include<stdio.h>
#include<string.h>
int main(void)
{
char s[100];
int i,j,count=0;
printf("Enter the string:");
scanf("%s",&s);
i=0;
j=strlen(s)-1;
while(j>1)
{
    if(s[i++]!=s[j--])
    {
        count=1;
        break;
    }
}
if(count==1)
{
    printf("The given string is not palindrome");
}
else
{
    printf("The given string is palindrome");
}
return 0;
}
