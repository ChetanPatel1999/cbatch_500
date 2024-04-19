//wap to find greatest num between three number.
#include<stdio.h>
void main()
{
   int num1,num2,num3;
   printf("enter threr values : ");
   scanf("%d%d%d",&num1,&num2,&num3);
 if(num1>num2 && num1>num3)
 {
    printf("greatest num = %d",num1);
 } 
 else if(num2>num1 && num2>num3)
 {
    printf("greatest num = %d",num2);
 } 
 else
 {
  printf("greatest num = %d",num3);
 }
}