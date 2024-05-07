// dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>
void main()
{
 int n;
 printf("enter dynamic arrya size :");
 scanf("%d",&n); 
 int *ptr=(int*)malloc(n*sizeof(int));// dynamic memory allocation
 int *temp=ptr;//400
 int i;
 printf("enter array element : \n");
 for(i=0;i<n;i++)
 {
    scanf("%d",ptr);
    ptr++;
 }
 ptr=temp;
 printf("print array elemet using pointer: \n");
 for(i=0;i<n;i++)
 {
  printf("%d\n",*ptr);
  ptr++;
 }
 ptr=temp;
 free(ptr);// free the mamory
}