//wap to check given num is divisible by  3 or 4 or 3 and 4 not.
#include<stdio.h>
void main()
{
   int num;
   printf("enter a num : ");
   scanf("%d",&num);// 20
   if(num%4==0 &&  num%3==0)
   {
     printf("num is divisible by 3 and 4");
   }
   else if(num%3==0)
   {
    printf("num is divisible by 3");
   }
   else if(num%4==0)
   {
    printf("num is divisible by 4");
   }
   else
   {
      printf("num is not divisible by 3 and 4");
   }
}