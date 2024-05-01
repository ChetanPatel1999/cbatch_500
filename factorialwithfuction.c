#include<stdio.h>
int factorial(int n)// n = 4
{
   int i,fact=1;
   for(i=1;i<=n;i++)
   {
    fact=fact*i;//24
   } 
   return fact;
}
void main()
{
 //int res=factorial(5);
 //printf("factorial of 5 = %d",res);
 int num;
 printf("enter a num :");
 scanf("%d",&num);
 int res=factorial(num);// fuction call by value
 printf("factorial of %d = %d",num,res);
}