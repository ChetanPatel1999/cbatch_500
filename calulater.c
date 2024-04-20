//wap to print day name according to number .
#include<stdio.h>
void main()
{
    int num,a,b,ans;
    printf("welcome my calculater :\n");
    printf("press 1 for add :\n");
    printf("press 2 for sub :\n");
    printf("press 3 for mul :\n");
    printf("press 4 for div :\n");
    printf("please press a num:");
    scanf("%d",&num);
    switch(num)
    {
      case 1:
      printf("enter frist num :");
      scanf("%d",&a);
      printf("enter second num :");
      scanf("%d",&b); 
      ans=a+b;
      printf("%d + %d = %d ",a,b,ans); 
      break;
       case 2:

            printf("write substraction prgm");

      break;
       case 3:

           printf("write multiplication prgm");

      break;
       case 4:



      break;
      default :printf("enter num 1 to 4");
    }
}