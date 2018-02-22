#include<stdio.h>
void main()
{
    int n1=0,n2=1,f,n,i;
    scanf("%d",&n);
    printf("%d\t%d\t",n1,n2);
    for(i=2;i<n;i++)
{     f=n1+n2;
       n1=n2;
       n2=f;
       printf("%d\t",f);
}
    
}
