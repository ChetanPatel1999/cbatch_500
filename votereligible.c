//wap to check voter is eligble for casting vote or note.
#include<stdio.h>
void main()
{
    int age;
    printf("enter youre age :");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("you ara eligibale\n");
    }
    else
    {
        printf("you are not eligible\n");
    }
} 