#include <stdio.h>
void main()
{
  char x[50],y[50];
  int i,temp=0;
  printf("\nEnter the first string");
  gets(x);
  printf("\nEnter the second string");
  gets(y);
  for(i=0;x[i]!='\0';i++)
  {
  if(x[i]==y[i])
  temp=1;
  else
  temp=0;
  }
  if(temp==1)
  printf("\nThe sting is:%s",x[i]);
  else
  printf("\n The greater sting is:%s",y[i]);
}  
