//2 D array in c
#include<stdio.h>
void main()
{
 int r,c;
 printf("enter matrix row :");
 scanf("%d",&r);
 printf("enter matrix column :");
 scanf("%d",&c);
 int mat[r][c];
 int i,j;
 printf("enter matrix element : \n");
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
    printf("enter elemet mat[%d][%d] :",i+1,j+1);
    scanf("%d",&mat[i][j]); 
  } 
   
 }
  printf("matrix elemet are :\n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
        printf("%d ",mat[i][j]);
    }
    printf("\n");
  }
}