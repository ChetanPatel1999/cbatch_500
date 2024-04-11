// global and local variable in c language
#include<stdio.h>
int glob=66;// global varible 
void fun()
{
 //printf("value of a = %d",a);	
 printf("value of glob = %d\n",glob);
}
void main()
{	
 int a=12;// local variable 
 printf("value of a = %d\n",a);
 printf("value of glob = %d\n",glob);
 fun();
}
