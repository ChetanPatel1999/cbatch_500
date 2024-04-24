#include<stdio.h>
void main()
{
    int num,a,b,ans;
    do
    {
    printf("welcome my calculater :\n");
    printf("press 1 for add :\n");
    printf("press 2 for sub :\n");
    printf("press 3 for mul :\n");
    printf("press 4 for div :\n");
    printf("press 5 for exit :\n");
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
      printf("%d + %d = %d\n",a,b,ans); 
      break;
       case 2:
      printf("enter frist num :");
      scanf("%d",&a);
      printf("enter second num :");
      scanf("%d",&b); 
      ans=a-b;
      printf("%d - %d = %d\n",a,b,ans);
      break;
       case 3:
      printf("enter frist num :");
      scanf("%d",&a);
      printf("enter second num :");
      scanf("%d",&b); 
      ans=a*b;
      printf("%d * %d = %d\n",a,b,ans);
      break;
       case 4:
      printf("enter frist num :");
      scanf("%d",&a);
      printf("enter second num :");
      scanf("%d",&b); 
      ans=a/b;
      printf("%d / %d = %d\n",a,b,ans);
      break;
      case 5: break;
      default :printf("please enter num 1 to 5\n");   
    }
    }
    while(num!=5);

}