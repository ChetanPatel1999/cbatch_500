//wap to print factorial of any number.
#include<stdio.h>
void main()
{
    int num,i,fact=1;
    printf("enter a num:");
    scanf("%d",&num);//5
    for(i=1;i<=num;i++)
    {
          fact=fact*i;//120
    }
    printf("factorail of %d = %d",num,fact);
}
