// pointer to array
#include<stdio.h>
void main()
{
 int arr[5];
 //int *ptr=&arr[0];
 int *ptr=arr;
 int i;
 printf("enter array element : \n");
 for(i=0;i<5;i++)//2
 {
    scanf("%d",&ptr[i]);  
 }
 printf("print array elemet using pointer: \n");
 for(i=0;i<5;i++)
 {
  printf("%d\n",ptr[i]);
 }
}