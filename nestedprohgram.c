// wap to print given num is even-positive or even-negative,or odd-positive,odd-negetive.
#include<stdio.h>
void main()
{
    int num;
    printf("enter a num :");
    scanf("%d",&num);
    if(num%2==0)
    {
      if(num<0)
      {
        printf("even-negative");
      }
      else{
        printf("even-positive");
      }  
    }
    else
    {
       if(num<0)
      {
        printf("odd-negative");
      }
      else{
        printf("odd-positive");
      }        
    }
}