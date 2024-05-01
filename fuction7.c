//fuction call from another fuction (not main fuction) 
#include<stdio.h>
void fun2();// fun2 declaration
void fun3();// fun3 declaration
void fun1()
{
    fun2();
    printf("fun1 is called\n");
}
void fun2()
{
    fun3();
    printf("fun2 is called\n");
}
void fun3()
{
    printf("fun3 is called\n");
}
void main()
{
  printf("main fuction start\n");
  fun1();
  printf("main fuction is end\n");
  fun3();
}