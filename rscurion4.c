//wap to print 1 to 10 even numbers  using recursion.
#include<stdio.h>
void num1_10()
{
    static  i=1;
    if(i%2==0)
    {
        printf("%d \n",i);
    }
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