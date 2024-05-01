//wap to print 1 to 10 even numbers  using recursion.
#include<stdio.h>
int num1_10()
{
    static  i=1,sum=0;
    sum=sum+i;//8
    i++;//2
    if(i<=10)
    {
        num1_10();
    }
    return sum;
}
void main()
{
   int res = num1_10();
   printf("sum 1 to 10 = %d",res);
}