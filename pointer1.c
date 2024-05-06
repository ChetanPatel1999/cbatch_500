#include<stdio.h>
void main()
{
    int a;
    a=12;
    int *ptr;
    ptr=&a;
    printf("value of a : %d\n",a);//12
    printf("adress of a : %d\n",&a);//123456
    printf("value of ptr : %d\n",ptr);//123456
    printf("value of a by ptr : %d\n",*ptr);//12
    printf("adress of ptr : %d\n",&ptr);//785634
}