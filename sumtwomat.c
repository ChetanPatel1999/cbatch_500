//2 D array in c
#include<stdio.h>
void main()
{
 int r,c;
 printf("enter matrix row :");
 scanf("%d",&r);
 printf("enter matrix column :");
 scanf("%d",&c);
 int mat1[r][c],mat2[r][c],sum[r][c];
 int i,j;
 printf("enter matrix1 element : \n");
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
    printf("enter elemet mat1[%d][%d] :",i+1,j+1);
    scanf("%d",&mat1[i][j]); 
  } 
   
 }
  printf("enter matrix2 element : \n");
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
    printf("enter elemet mat1[%d][%d] :",i+1,j+1);
    scanf("%d",&mat2[i][j]); 
  } 
   
 }
  printf("matrix1 elemet are :\n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
        printf("%d ",mat1[i][j]);
    }
    printf("\n");
  }
   printf("matrix2 elemet are :\n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
        printf("%d ",mat2[i][j]);
    }
    printf("\n");
  }
  // sum two matrix
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
        sum[i][j]=mat1[i][j]+mat2[i][j];
    }
   
  }
   printf("summat elemet are :\n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
        printf("%d ",sum[i][j]);
    }
    printf("\n");
  }

}