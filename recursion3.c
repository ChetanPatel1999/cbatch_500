//wap to print 1 to 10 numbers using recursion.
#include<stdio.h>
void num1_10()
{
    static  i=1;
    printf("%d \n",i);
    i++;
    if(i<=10)
    {
        num1_10();
    }
}
void main()
{
   num1_10();
}