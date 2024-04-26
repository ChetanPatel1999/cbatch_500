//wap to print 1 to 10 using goto.  
#include<stdio.h>
void main()
{
  int i=1;
  lab:
  if(i%2==0)
  {
    printf("%d\n",i);
  }
  i++;
  if(i<=10)
  {
    goto lab;
  }

}