//print odd numbers only
#include<stdio.h>
void main()
{
    int i;
    for(i=1;i<=10;i++)//4
    {
        if(i%2==0)
        {
            continue;
        }
         printf("%d\n",i);//1 3
        
    }
    
}