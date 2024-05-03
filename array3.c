#include<stdio.h>
int sumarray(int arr[],int s)
{
  int sum=0,i;
  for(i=0;i<s;i++)
  {
    sum=sum+arr[i];
  }
  return sum;
}
void display(int arr[],int s)
{
  int i;
  printf("array elemet are :\n");
  for(i=0;i<s;i++)
  {
    printf("%d\n",arr[i]);
  }
  printf("\n");
}
void reverse(int arr[],int s)
{
    int i;
    printf("revrse arry element :\n");
    for(i=s-1;i>=0;i--)
    {
        printf("%d\n",arr[i]);
    }
    printf("\n");
}
void  evenoddcout(int arr[],int s)
{
    int i,evencount=0,oddcount=0;
    for(i=0;i<s;i++)
    {
        if(arr[i]%2==0)
        {
          evencount++;
        }
        else{
            oddcount++;
        }
    }
    printf("total even element = %d\n",evencount);
    printf("total odd element = %d\n",oddcount);
}
int maxvale(int arr[],int s)
{
    // 12 56 567 34 8
    int max=arr[0],i;//1235
    for(i=0;i<s;i++)//1
    {
       if(max<arr[i])
       {
        max=arr[i];
       }
    }
    return max;
}
void main()
{
  int n;
  printf("enter array size : ");
  scanf("%d",&n); 
  int arr[n]; 
  int i; 
  printf("enter array element : \n");
  for(i=0;i<n;i++)
  {
    printf("enter element pos %d :",i+1);
    scanf("%d",&arr[i]);
  }
 // int res=sumarray(arr,n);
  //printf("\nsum of array element = %d",res);
  display(arr,n);
 // reverse(arr,n);
 //evenoddcout(arr,n);
 printf("max elemet = %d",maxvale(arr,n));
}
