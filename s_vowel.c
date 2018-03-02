#include<stdio.h>
#include<string.h>
int main(void)
{
char s[100],b[5]={'a','e','i','o','u'};
int i,j,count=0,n;
printf("Enter the string:");
scanf("%s",&s);
n=strlen(s);
for(i=0;i<n;i++)
{
    for(j=0;j<5;j++)
    {
        if(a[i]==b[j])
        {
            count=1;
            break;
        }
    }
}
if(count==1)
{
    printf("Yes");
}
else
{
    printf("No");
}
return 0;
}
