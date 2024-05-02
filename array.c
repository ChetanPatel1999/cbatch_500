#include<stdio.h>
void main()
{
   int arr[]={12,34,56,78,90};
   int i;
  // printf("size of array = %d\n",sizeof(arr));
   printf("array element are : \n");
   for(i=0;i<5;i++)//3
   {
    printf("%d\n",arr[i]);
   }
   // sum all element of array
   int sum=0;
   for(i=0;i<5;i++)
   {
     sum=sum+arr[i];
   }
   printf("total array element sum =%d ",sum);
   
}