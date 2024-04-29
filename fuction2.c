#include<stdio.h>
void add()
{
  int a,b,sum;
  printf("enter two number : ");
  scanf("%d%d",&a,&b);
  sum=a+b;
  printf("sum = %d\n",sum);  
}
void sub()
{
  int a,b,sum;
  printf("enter two number : ");
  scanf("%d%d",&a,&b);
  sum=a-b;
  printf("sub = %d\n",sum);  
}
void main()
{
 printf("this is main fuction\n");
  int i;
  sub();
  for(i=1;i<=5;i++)//3
  {
    add();
  }
 printf("end main fuction\n");
}
