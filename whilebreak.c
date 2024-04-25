#include<stdio.h>
void main()
{
    int i=1;
    while(i<=10)
    {
       printf("%d\n",i); //1 4 5 6
       if(i>5)
       {
        break;
       }
       i++;//6
    }
   
}