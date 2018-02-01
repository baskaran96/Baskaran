#include<stdio.h>
#include<string.h>
void main()
{
char str[200]="xiomif675216";
int x,count=0;
for(x=0;str[x]!='\0';x++)
{
if(str[x]=='1'||str[x]=='2'||str[x]=='3'||str[x]=='@')
count ++;
}
printf("number of special character is %d",count);
}
