#include<stdio.h>
void main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        printf("%d\n",i);// 1
        if(i==5)
        {
            break;
        }
        else if(i==3)
        {
            printf("break is exicute\n");
            break;
        }

    }
    printf("after for loop\n");
}