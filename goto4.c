//wap to print 1 to 10 using goto.  
#include<stdio.h>
void main()
{
  int i=1;
  printf("hi students\n");
  i++;//2
  if(i<=10)
  {
    goto lab;
  }
  lab:
  printf("jump on lab");

}