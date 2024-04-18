// wap to print "good morning" if user press 1
// print "good after noon" if user press 2
// print "good evening" if user press 3
#include<stdio.h>
void main()
{
 int num;
 printf("press num : ");
 scanf("%d",&num);//5
 if(num==1)
 {
   printf("GOOD MORNING");
 }
 if(num==2)
 {
    printf("GOOD AFTER NOON");
 }
 if(num==3)
 {
    printf("GOOD EVENING");
 }
 if(num>3)
 {
   printf("please enter num 1 ,2 or 3");
 }
}