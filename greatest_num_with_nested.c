//wap to find greatest num between three number without logical and operator..
#include<stdio.h>
void main()
{
   int num1,num2,num3;
   printf("enter three values : ");
   scanf("%d%d%d",&num1,&num2,&num3);//121 334 556
    if(num1>num2)
    {
        if(num1>num3)
        {
           printf("greatest num = %d",num1);
        }
        else
        {
           printf("greatest num = %d",num3);  
        }
    }
    else
    {
          if(num2>num3)
          {
            printf("greatest num = %d",num2); 
          }
          else
          {
             printf("greatest num = %d",num3); 
          }
    }
}