//wap to print reverse number three digit.
#include<stdio.h>
void main()
{
   int num,r,s,t,rev;
   printf("enter a num : ");
   scanf("%d",&num);
   
     r=num/100;
     s=(num/10)%10;
     t=num%10;

     rev=r+s*10+t*100;
     printf("rev = %d",rev);
  
}