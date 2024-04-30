//with return type ,with argument type fuction
#include<stdio.h>
int add(int a,int b)//a=12,b=5
{
  int sum;
  sum=a+b;//17
  return sum;
}
void main()
{
 int res=add(12,5);
 printf("sum = %d\n",res);
 printf("sum= %d\n",add(6,6));
}