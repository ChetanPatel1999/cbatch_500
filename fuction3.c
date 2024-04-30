//no return type ,no argument type fuction
#include<stdio.h>
void add()
{
  int a,b,sum;
  printf("enter two number : ");
  scanf("%d%d",&a,&b);
  sum=a+b;
  printf("sum = %d\n",sum);
}
void main()
{
 add();
}