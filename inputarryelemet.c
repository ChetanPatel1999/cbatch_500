#include<stdio.h>
void main()
{
   int arr[5];
   int i;
   printf("enter array element : ");
   for(i=0;i<5;i++)
   {
     scanf("%d",&arr[i]);
   }
   printf("array element are : \n");
   for(i=0;i<5;i++)//3
   {
    printf("%d\n",arr[i]);
   }
   
}