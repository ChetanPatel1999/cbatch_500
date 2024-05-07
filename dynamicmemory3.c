// dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>
void main()
{
 int n;
 printf("enter dynamic arrya size :");
 scanf("%d",&n); 
 int *ptr=(int*)calloc(n,sizeof(int));
 int *temp=ptr;
 int i;
 printf("adress of daynamic allocate memory : \n");
 for(i=0;i<n;i++)
 {
  printf("%d\n",ptr);
  ptr++;
 }
 ptr=temp;
 int n1;
 printf("enter new increse array size :");
 scanf("%d",&n1);
 int *newptr=(int*)realloc(ptr,n1*sizeof(int));
 printf("adress of new increse array  : \n");
 for(i=0;i<n1;i++)
 {
  printf("%d\n",newptr);
  newptr++;
 }
 free(ptr);// free the mamory
}