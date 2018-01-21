#include<stdio.h>
int main()
{
   int n,b[100],i,temp,j,k;
   printf("enter the count\nenter the elements");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       scanf("%d",&b[i]);
   }
   for(j=1;j<=n;j++)
   {
      for(k=j+1;k<=n;k++)
      {
        if(b[j]>=b[k])
        {
        temp=b[j];
        b[j]=b[k];
        b[k]=temp;
            
        }
      }
   
   }
        printf(" %d\t",b[j/2]);

}

