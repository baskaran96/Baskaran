#include<stdio.h>
int main(void)
{
    float x,d;
    int m;
    printf("Enter the nubmer:");
    scanf("%f",&x);
    m=x;
    d=x-m;
    if((d>=0.5)&&(d<0.9))
    {
        m+=1;
    }
    if((d>0.1)&&(d<0.5))
    {
        m+=0;
    }
    printf("The nearest integer greater round off is %d",m);
    return 0;
}
