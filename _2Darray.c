//2 D array in c
#include<stdio.h>
void main()
{
 int mat[3][3]={{12,34,56},{11,22,33},{12,13,14}};
 int i,j;
  printf("matrix elemet are :\n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
        printf("%d ",mat[i][j]);
    }
    printf("\n");
  }
}