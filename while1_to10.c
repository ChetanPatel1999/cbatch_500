#include<stdio.h>
void main()
{
    int i=1,sum=0;
    while(i<=10)
    {
       if(i%2==1)
       {
        sum=sum+i;
       }
        i++; 
    }
    printf("even sum = %d",sum);
}