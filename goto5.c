//wap to print 1 to 10 using goto.  
#include<stdio.h>
#include<stdlib.h>
void main()
{

  int i=1;
  if(i>=10)
  {
    goto lab1;
  }
  else
  {
    goto lab2;
  }
  printf("after else stmnt");
  lab1:
  printf("jump on lab1\n");
  exit(0);// its exit form programm.
  lab2:
  printf("jump on lab2\n");

}