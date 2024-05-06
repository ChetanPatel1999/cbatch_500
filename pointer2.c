// we can change variable value using pointer withot interact them. 
#include<stdio.h>
void main()
{
    int a;
    a=12;
    int *ptr;
    ptr=&a;
    printf("before value of a : %d\n",a);
    *ptr=15;
    printf("after value of a : %d\n",a);
}