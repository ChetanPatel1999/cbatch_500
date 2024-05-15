#include<stdio.h>
void main()
{
    FILE *ptr;
    ptr=fopen("aaa.txt","a");
    int num,fact=1,i;
    printf("enter a num : ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("factorial of %d = %d\n",num,fact);
    fprintf(ptr,"factorial of %d = %d\n",num,fact);
    fclose(ptr);
}