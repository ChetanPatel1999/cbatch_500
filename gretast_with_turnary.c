//wap to print greatest number between two numbers.
#include<stdio.h>
void main()
{
 int num1,num2,ans;
 printf("enter two numbers : ");
 scanf("%d%d",&num1,&num2);//12 12
 //num1>num2?printf("greatest num = %d",num1):printf("greatest num = %d",num2);
 ans=num1>num2?num1:num2;
 printf("greatest num= %d",ans);
}
