//wap to check given num is positive or negative or Zero.
#include<stdio.h>
void main()
{
   int num;
   printf("enter a num : ");
   scanf("%d",&num);
   if(num==0)
   {
    printf("Zero");
   } 
   else if(num<0)
   {
     printf("negative number");
   }
   else
   {
      printf("positive num");
   }
}