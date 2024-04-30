//with return type ,no argument type fuction
#include<stdio.h>
int add()
{
  int sum,a,b;
  printf("enter two value : ");
  scanf("%d%d",&a,&b);
  sum=a+b;
  return sum;
}
void main()
{
 int res=add();
 printf("sum = %d\n",res);
 printf("sum= %d\n",add());
}