//wap to print greatest number between three numbers.
#include<stdio.h>
void main()
{
 int num1,num2,num3,ans;
 printf("enter two numbers : ");
 scanf("%d%d%d",&num1,&num2,&num3);// 121 34 56
 //ans=num1>num2?num1:num2;
 //ans=ans>num3?ans:num3;
 ans=num1>num2?(num1>num3?num1:num3):(num2>num3?num2:num3);
 printf("greatest num= %d ",ans);
}
