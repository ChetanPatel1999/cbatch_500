#include<stdio.h>
//int i=1;// gloably variable
void main()
{
    static int i=1;// its exicute once time 
    printf("hi i am main fuction\n");//5
    i++;//6
    if(i<=5)
    {
        main();
    }
}