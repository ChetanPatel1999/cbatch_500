// for loop example 
//wap to print even numbers btween 1 to 20.
#include<stdio.h>
void main()
{
   int i;
   printf("even number 1 to 20 :\n");
   for(i=1;i<=20;i++)//4
   {
     if(i%2==0)
     {
        printf("%d\n",i);//2 4 
     }
   }
}