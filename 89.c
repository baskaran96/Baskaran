#include<stdio.h>
#include <string.h>
void main()
{
    int i,j,n;
    char x[20][50],t[50];
    printf("Enter the no. of words:");
    scanf("%d",&n);
    for(i=0;i<n;++i)
        scanf("%x[^\n]",x[i]);
    for(i=0;i<n-1;++i)
        for(j=i+1;j<n;++j)
        {
            if(strcmp(x[i],x[j])>0)
            {
                strcpy(t,x[i]);
                strcpy(x[i],x[j]);
                strcpy(x[j],t);
            }
        }
    printf("\nIn lexicographical order: \n");
    for(i=0;i<n;++i)
    {
        puts(x[i]);
    }
}

