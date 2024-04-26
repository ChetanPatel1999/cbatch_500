//wap to print a msg 5 times using goto.  
#include<stdio.h>
void main()
{
  int i=1;
  lab:
  printf("hi i ma student\n");
  i++;//6
  if(i<=5)
  {
    goto lab;
  }

}