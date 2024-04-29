#include<stdio.h>
void add();//fuction declartion
void main()
{
 printf("this is main fuction\n");
 add(); // fuction calling
 add();
 add();
 printf("end main fuction\n");
}
void add()//fuction defination
{
  int a,b,sum;
  printf("enter two number : ");
  scanf("%d%d",&a,&b);
  sum=a+b;
  printf("sum = %d\n",sum);  
}