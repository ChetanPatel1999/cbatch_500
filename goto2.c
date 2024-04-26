//wap to print 1 to 10 using goto.  
#include<stdio.h>
void main()
{
  int i=1;
  lab:
  printf("%d\n",i);
  i++;//6
  if(i<=10)
  {
    goto lab;
  }

}