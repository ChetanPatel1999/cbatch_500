// if we increase pointer by one so pointer (adress)value increse by 4 
//if pointer is integer type. 
#include<stdio.h>
void main()
{
    int a;
    a=12;
    int *ptr;
    ptr=&a;
    printf("value of ptr : %d\n",ptr);//456789
    ptr++;
    //ptr=ptr+1;
    printf("after increase value of ptr : %d\n",ptr);//456793
    ptr++;
    printf("after increase value of ptr : %d\n",ptr);//456797
}