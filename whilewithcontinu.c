#include<stdio.h>
void main()
{
    int i=1;
    while(i<=10)
    {
         i++;//11
         if(i%2==0)
         {
            continue;
         }
        printf("%d\n",i);// 3 9 11 
    }
}